//jshint esversion:6

const express = require("express");
const bodyParser = require("body-parser");

const app = express();
app.set('view engine', 'ejs');

app.listen(3000, function(){
    console.log("LIstening on port 3000");

});
app.use(express.static("public"));


app.get("/", function(req, res){
var p = "Redesigned UX Flow and Consumer Advocate method, which resulted in a 19% drop in returns.";

  res.render("home");

});

app.get("/doorbell", function(req,res){
res.render("doorbell");

});
