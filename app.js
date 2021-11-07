//jshint esversion:6

const express = require("express");
const bodyParser = require("body-parser");

const app = express();

app.listen(3000, function(){
    console.log("LIstening on port 3000");

});
app.use(express.static("public"));
app.get("/", function(req, res){

res.sendFile(__dirname + "/index.html");

});
