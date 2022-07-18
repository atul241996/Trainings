function input(){
    n1=parseFloat(document.forms["f1"]["n1"].value);
    n2=parseFloat(document.forms["f1"]["n2"].value);
}
function add(){
    input();
    document.querySelector("div").innerHTML=n1+n2;
} 
function sub(){
    input();
    document.querySelector("div").innerHTML=n1-n2;
} 
function mul(){
    input();
    document.querySelector("div").innerHTML=n1*n2;
} 
function div(){
    input();
    document.querySelector("div").innerHTML=n1/n2;
} 
function mod(){
    input();
    document.querySelector("div").innerHTML=n1%n2;
} 