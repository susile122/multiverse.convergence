body {
    display: flex;
    margin: 0;
    font-family: Arial, sans-serif;
}

.sidebar {
    width: 250px;
    background-color: #f4f4f4;
    padding: 20px;
    box-shadow: 2px 0 5px rgba(0,0,0,0.1);
}

.logo img {
    max-width: 100%;
    height: auto;
    margin-bottom: 20px;
}

.nav {
    list-style-type: none;
    padding: 0;
}

.nav li {
    margin-bottom: 10px;
}

.nav a {
    text-decoration: none;
    color: #333;
}

.nav a:hover {
    color: #0088cc;
}

.content {
    padding: 20px;
    flex-grow: 1;
}

section {
    margin-bottom: 20px;
}
