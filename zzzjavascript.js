
 function myFunction(){
//    var un=document.form["myForm"]["username"].value;
//    var pw=document.form["myForm"]["pass"].value;
//   if(un=="student" && pw=="1234"){
     window.location.href ="welcome.html";
 }
function myFunction()
{
var farmerID=document.getElementById("username-field").value;
localStorage.setItem("id", farmerID);
return false;
}

