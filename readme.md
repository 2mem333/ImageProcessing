# Image Processing Tool

A simple image processing application that demonstrates:
- Edge detection (Gradient & Canny)
- Hough Transform (Line & Circle detection)
- Basic filtering (Gaussian blur)
- Custom convolution masks

---

##  Features

-  Line detection using Hough Transform
-  Circle detection with adjustable radius range
-  Binary tresholding & auto-treshold option
-  Gradient-based edge detection
-  Optional Gaussian Blur
-  Custom mask support (X, Y, Example masks)

---

## ⚙️ Options (Brief)

- **Binary Image Treshold** → Controls binarization sensitivity  
- **Hough Vote Treshold** → Minimum votes for detecting shapes  
- **Auto Tresholding** → Automatically selects treshold (from histogram, not fully completed) 
- **Draw Desired Amount** → Limits number of detected shapes  
- **Gaussian Blur** → Reduces noise before detection  
- **Circle Treshold D/R** → Controls circle detection sensitivity  

---

## 🖼️ Screenshots

###  Line Detection Example
<p align="center">
  <img src="https://github.com/user-attachments/assets/43d5a8b6-0336-4879-b5d0-a4d5f55fb58f" width="800"/> 
</p>

---

###  Circle Detection Example
<p align="center">
  <img src="https://github.com/user-attachments/assets/70d35cfa-f6d1-4459-bb07-8daa4eff2243" width="800"/> 
</p>

---

###  Hough Space Visualization
<p align="center">
  <img src="https://github.com/user-attachments/assets/2010b304-8ee8-453b-ac4d-0c9f2f076758" width="800"/>
</p>

---

##  How It Works (Short)

1. Convert image to grayscale  
2. Apply edge detection (Gradient or Canny)  
3. Perform Hough Transform  
4. Apply thresholding  
5. Draw detected shapes  

---

## 🛠️ Technologies

- C++ / C++ CLI  
- Custom image processing pipeline (no external libs)

---

## 📌 Notes

- Designed for educational purposes  
- Focused on understanding core image processing algorithms  
