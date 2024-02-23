import React, { useState, useEffect } from 'react';
import { LineChart, Line, XAxis, YAxis, Tooltip, Legend, CartesianGrid } from 'recharts';
import Data from '../data/data.json';


const ChartComponent = () => {
  const [data, setData] = useState([]);

  useEffect(() => {
        setData(Data);
  }, [])

  return (
    <div>
      {data.length > 0 ? (
        <LineChart width={800} height={300} data={data}>
          <XAxis dataKey="name" />
          <YAxis />
          <CartesianGrid stroke="#eee" strokeDasharray="5 5" />
          <Line type="monotone" dataKey="value" stroke="#8884d8" />
          <Tooltip />
          <Legend />
        </LineChart>
      ) : (
        <p>Загрузка данных...</p>
      )}
    </div>
  );
};

export default ChartComponent;
