import React, { useState } from "react";

function App() {
  const [count, setCount] = useState(0);

  const containerStyle = {
    height: "100vh",
    display: "flex",
    justifyContent: "center",
    alignItems: "center",
    background: "linear-gradient(to right, #4facfe, #00f2fe)",
    fontFamily: "Arial, sans-serif",
  };

  const cardStyle = {
    width: "300px",
    backgroundColor: "#fff",
    padding: "25px",
    borderRadius: "20px",
    textAlign: "center",
    boxShadow: "0 4px 15px rgba(0,0,0,0.2)",
  };

  const titleStyle = {
    color: "#1e90ff",
    marginBottom: "20px",
  };

  const counterBox = {
    border: "3px solid #1e90ff",
    borderRadius: "15px",
    padding: "25px",
    fontSize: "60px",
    fontWeight: "bold",
    color: "#1e90ff",
    marginBottom: "20px",
  };

  const buttonStyle = {
    width: "100%",
    padding: "12px",
    margin: "10px 0",
    border: "none",
    borderRadius: "10px",
    color: "#fff",
    fontSize: "16px",
    cursor: "pointer",
  };

  return (
    <div style={containerStyle}>
      <div style={cardStyle}>
        <h1 style={titleStyle}>React Counter</h1>

        <div style={counterBox}>{count}</div>

        <button
          style={{ ...buttonStyle, backgroundColor: "green" }}
          onClick={() => setCount(count + 1)}
        >
          Increment (+)
        </button>

        <button
          style={{ ...buttonStyle, backgroundColor: "crimson" }}
          onClick={() => setCount(count - 1)}
        >
          Decrement (-)
        </button>

        <button
          style={{ ...buttonStyle, backgroundColor: "#0057ff" }}
          onClick={() => setCount(0)}
        >
          Reset
        </button>

        <p style={{ marginTop: "15px", color: "#777", fontSize: "14px" }}>
          Simple Counter App using React useState Hook
        </p>
      </div>
    </div>
  );
}

export default App;