function ProjectList() {
    const projects = [
        {
            title: "Project 1",
            description: "Implementation of FaceNet Paper",
            link: "https://github.com/Ayushman444/FaceRecognitionSystem"
        },
        {
            title: "Project 2",
            description: "Smart Attendance System",
            link: "https://github.com/aviral-mishra-1008/Netra_Attendance_System"
        }
    ];

    return (
        <section id="projects" className="project-section">
            <h2>Projects</h2>
            <div className='project-list'>
                {projects.map((project, index) => (
                    <div key={index} className='project-item'>
                        <h3>{project.title}</h3>
                        <h3>{project.description}</h3>
                        <a href={project.link}> <h3> Project Link</h3> </a>
                    </div>
                ))}
            </div>
        </section>
    );
}

export default ProjectList;