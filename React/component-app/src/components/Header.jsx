function Header() {
    const name = "Aviral Mishra"
    const position = "Btech Undergrad at MNNIT Allahabad"

    return (
        <header className='header'>
            {/* <img src={image} style={{ width: '250px' }}></img> */}
            <h1>{name}</h1>
            <p>{position}</p>
            <nav>
                <a href="#about">About</a>
                <a href="#projects">Projects</a>
                <a href="#contact">Contact</a>
            </nav>
        </header>
    )
}

export default Header;