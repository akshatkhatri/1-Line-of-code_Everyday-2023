$(function(){
    $("#clearList").click(function(event){
        event.preventDefault();
        $("#userList").empty();
    });
});

$(function(){
    $("#addElement").submit(function(event){
        event.preventDefault();
        $("#userList").append("<li>"+$("#addElement input[name='liContent']").val()+"</li>")
        $("#addElement input[name='liContent']").val("");
    })
});