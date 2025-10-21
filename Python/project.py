

### *1. Farmer Registration (Backend using Flask)*

# app.py
from flask import Flask, render_template, request, redirect, url_for
from flask import SQLAlchemy

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///farmers.db'
db = SQLAlchemy(app)

class Farmer(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(100), nullable=False)
    location = db.Column(db.String(100), nullable=False)
    crop = db.Column(db.String(100), nullable=False)

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/register', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        name = request.form['name']
        location = request.form['location']
        crop = request.form['crop']

        new_farmer = Farmer(name=name, location=location, crop=crop)
        db.session.add(new_farmer)
        db.session.commit()

        return redirect(url_for('index'))
    
    return render_template('register.html')

if __name__ == "__main__":
    db.create_all()
    app.run(debug=True)


### *2. Marketplace Listing (Frontend)*


'''
html
<!-- templates/marketplace.html -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Marketplace</title>
    <link rel="stylesheet" href="{{ url_for('static', filename='style.css') }}">
</head>
<body>
    <h1>Marketplace</h1>
    <table>
        <tr>
            <th>Farmer Name</th>
            <th>Location</th>
            <th>Crop</th>
        </tr>
        {% for farmer in farmers %}
        <tr>
            <td>{{ farmer.name }}</td>
            <td>{{ farmer.location }}</td>
            <td>{{ farmer.crop }}</td>
        </tr>
        {% endfor %}
    </table>
</body>
</html>'''


