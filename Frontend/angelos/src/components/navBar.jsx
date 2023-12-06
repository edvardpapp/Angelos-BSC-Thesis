import React from "react";
import { Link, NavLink } from "react-router-dom";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import { faMagnifyingGlassChart } from "@fortawesome/free-solid-svg-icons";
const Navbar = ({ ids }) => {
  return (
    <nav
      className="navbar navbar-expand  navbar-light"
      style={{ backgroundColor: "#a7826ca2" }}>
      <div className="container-fluid">
        <FontAwesomeIcon icon={faMagnifyingGlassChart} flip="horizontal" />

        <Link className="navbar-brand" to="/">
          Angelos
        </Link>
        <div className="collapse navbar-collapse" id="navbarNavAltMarkup">
          <div className="navbar-nav">
            <ul className="navbar-nav me-auto mb-2 mb-lg-0">
              <li className="nav-item dropdown">
                <a
                  className="nav-link dropdown-toggle"
                  href="#"
                  id="navbarDropdown"
                  role="button"
                  data-bs-toggle="dropdown"
                  aria-expanded="false">
                  Show sensor
                </a>
                <ul className="dropdown-menu" aria-labelledby="navbarDropdown">
                  {ids.map((id) => (
                    <NavLink
                      className="dropdown-item"
                      to={`/sensor/${id}`}
                      key={id}>
                      {id}
                    </NavLink>
                  ))}
                </ul>
              </li>
            </ul>
          </div>
        </div>
      </div>
    </nav>
  );
};

export default Navbar;
