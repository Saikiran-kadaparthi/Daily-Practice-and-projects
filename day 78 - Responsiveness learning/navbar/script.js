const menuBtn = document.getElementById('menubtn');
const menu = document.getElementById('links');
const closeBtn = document.getElementById('closebtn'); 

function showMenu()
{
    menu.style.display = 'block';
    closeBtn.style.display = 'block';
    menuBtn.style.display = 'none';
}

function hideMenu()
{
    menu.style.display = 'none';
    closeBtn.style.display = 'none';
    menuBtn.style.display = 'block';
}