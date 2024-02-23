const puppeteer = require('puppeteer-extra');
const pluginStealth = require('puppeteer-extra-plugin-stealth');
const userAgent = require('user-agents');
const fs = require('fs');

puppeteer.use(pluginStealth());

const getProductInfo = async (url, region) => {
    const browser = await puppeteer.launch({ 
        headless: true, 
        defaultViewport: null,
        args: ['--no-sandbox', '--disable-setuid-sandbox'] // Добавляем аргументы для избежания блокировки
    });

    const page = await browser.newPage();

    const useragent = new userAgent();
    await page.setUserAgent(useragent.toString()); // Устанавливаем случайный User-Agent

    await page.setExtraHTTPHeaders({
        'Accept-Language': 'en-US,en;q=0.9'
    });

    await page.goto(url, { waitUntil: 'domcontentloaded' });

    // Лучше использовать waitForSelector вместо жесткой задержки
    await page.waitForSelector('.Price_price__QzA8L', { visible: true, timeout: 30000 });

    const price = await page.$eval('.Price_price__QzA8L', el => el.textContent); // Метод $eval для получения текста
    const rating = await page.$eval('.product-rating', el => el.textContent);
    const reviewsCount = await page.$eval('.product-reviews-count', el => el.textContent);

    const productInfo = `Price: ${price}\nRating: ${rating}\nReviews: ${reviewsCount}`;
    fs.writeFileSync('product.txt', productInfo);

    await page.screenshot({ path: 'screenshot.jpg', fullPage: true });

    await browser.close();
};

const url = process.argv[2];
const region = process.argv[3];
getProductInfo(url, region);


