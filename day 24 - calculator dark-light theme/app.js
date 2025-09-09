const theme = document.getElementById('theme');

theme.addEventListener('click', () => {
    const currentColor = window.getComputedStyle(theme).backgroundColor;

    if(currentColor === 'rgb(198, 196, 196)') { // white
        theme.style.backgroundColor = 'rgb(198, 196, 195)';
        theme.textContent = "LIGHT";
        theme.style.color = 'black';
        document.body.classList.remove('dark-theme');
        document.body.classList.add('light-theme');
    } else { /*black*/
        theme.style.backgroundColor = 'rgb(198, 196, 196)';
        theme.style.color = 'black';
        theme.textContent = "DARK";
        document.body.classList.remove('light-theme');
        document.body.classList.add('dark-theme');
        
    }
});