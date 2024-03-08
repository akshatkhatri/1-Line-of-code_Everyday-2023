$(document).ready(function(){
    $("a").click(function(event){
        alert("you clicked on a link to"+event.currentTarget.href);
    });
});

$(document).ready(function(){
    $("a").click(function(event){
        if(this.href!=null && this.href.length>4 && this.href.substring(0,4)=="https"){
            event.preventDefault();
            // window.open(this.href,_blank);
        }
    });
});
