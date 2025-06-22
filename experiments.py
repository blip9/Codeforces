# Import the OpenCV library
import cv2
import os # Import os module for path operations

# --- Configuration ---
# Path to the Haar Cascade classifier file for frontal face detection
# Note: You might need to provide the full path if the file isn't in the same directory.
# You can often find this file within your OpenCV installation directory or download it.
cascade_path = 'haarcascade_frontalface_default.xml'

# Path to the image you want to perform face detection on
image_path = 'XaHpf_z51huQS_JPHs-jkPhBp0dLlxFJwt-sPLpGJB0.jpg' # <--- CHANGE THIS TO YOUR IMAGE FILE

# --- Error Handling: Check if files exist ---
if not os.path.exists(cascade_path):
    print(f"Error: Cascade file not found at {cascade_path}")
    print("Please download 'haarcascade_frontalface_default.xml' or provide the correct path.")
    exit()

if not os.path.exists(image_path):
    print(f"Error: Image file not found at {image_path}")
    print("Please provide a valid image file path.")
    exit()

# --- Load the Classifier and Image ---
try:
    # Load the Haar Cascade classifier
    face_cascade = cv2.CascadeClassifier(cascade_path)
    if face_cascade.empty():
        raise IOError(f"Could not load cascade classifier from {cascade_path}")

    # Read the input image
    image = cv2.imread(image_path)
    if image is None:
        raise IOError(f"Could not read image file: {image_path}")

    # Convert the image to grayscale (Haar cascades work better on grayscale)
    gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # --- Perform Face Detection ---
    # detectMultiScale parameters:
    #   scaleFactor: How much the image size is reduced at each image scale. (e.g., 1.1 means reduce by 10%)
    #   minNeighbors: How many neighbors each candidate rectangle should have to retain it. Higher value -> fewer detections but higher quality.
    #   minSize: Minimum possible object size. Objects smaller than this are ignored.
    faces = face_cascade.detectMultiScale(
        gray_image,
        scaleFactor=1.1,
        minNeighbors=5,
        minSize=(30, 30) # Look for faces at least 30x30 pixels
    )

    print(f"Found {len(faces)} face(s) in the image.")

    # --- Draw Rectangles Around Detected Faces ---
    # Loop through all the coordinates of detected faces
    for (x, y, w, h) in faces:
        # Draw a rectangle on the original color image
        # Parameters: image, start_point (x,y), end_point (x+w, y+h), color (BGR), thickness
        cv2.rectangle(image, (x, y), (x+w, y+h), (0, 255, 0), 2) # Green rectangle

    # --- Display the Output ---
    # Show the image with detected faces in a window
    cv2.imshow('Faces Found', image)

    # Wait indefinitely until a key is pressed (0 means wait forever)
    print("Press any key in the image window to close.")
    cv2.waitKey(0)

    # Close all OpenCV windows
    cv2.destroyAllWindows()

except cv2.error as e:
    print(f"OpenCV Error: {e}")
except IOError as e:
    print(f"File Error: {e}")
except Exception as e:
    print(f"An unexpected error occurred: {e}")