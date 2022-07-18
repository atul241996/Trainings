function input(){
    n1 = document.forms["f1"]['n1'].value;
    n2 = document.forms["f1"]['n2'].value;
}
function add() {
    input();
    document.querySelector("div").innerHTML = parseFloat(n1) + parseFloat(n2);
}
function muliply() {
    input();
    document.querySelector("div").innerHTML = parseFloat(n1) * parseFloat(n2);
}
function sub() {
    input();
    document.querySelector("div").innerHTML = parseFloat(n1) - parseFloat(n2);
}
function per() {
    input();
    document.querySelector("div").innerHTML = parseFloat(n1) / parseFloat(n2) *100;
}
function dvi() {
    input();
    document.querySelector("div").innerHTML = parseFloat(n1) / parseFloat(n2);
}
function min() {
    input();
    var n3;
    if(parseFloat(n1) < parseFloat(n2)){
        n3 = n1;
    }
    else{
        n3=n2
    }
    document.querySelector("div").innerHTML = n3;
}
function max() {
    input();
    var n3;
    if(parseFloat(n1) > parseFloat(n2)){
        n3 = n1;
    }
    else{
        n3=n2
    }
    document.querySelector("div").innerHTML = n3;
}