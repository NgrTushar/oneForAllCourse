import { useEffect, useState } from "react"; 

// Importing the PostComponent from a local file
import { PostComponent } from "./Post"; 

// Main App component declaration
function App() { 
const[currentTab,setcurrentTab] =useState("feed");
useEffect(function(){
  console.log("sending request to tab: "+currentTab);
},[currentTab])
  
  return ( 
    <div>
      <button onClick={function(){
        setcurrentTab("feed")
      }} style={{color: currentTab=="feed" ? "red" : "black"}}>Home</button>
      <button onClick={function(){
        setcurrentTab("network")
      }} style={{color: currentTab=="network" ? "red" : "black"}}>Network</button>
      <button onClick={function(){
        setcurrentTab("notifications")
      }} style={{color: currentTab=="notifications" ? "red" : "black"}}>Nofications</button>
      <button onClick={function(){
        setcurrentTab("jobs")
      }} style={{color: currentTab=="jobs" ? "red" : "black"}}>Jobs</button>

    </div>
  );
}



export default App
