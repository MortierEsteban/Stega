from PIL import Image
import numpy as np

def main():
    # Read Image 
    print("caca")
    img= Image.open('/root/Stega/image.jfif')  
    # Convert Image to Numpy as array 
    print(img)
    img = np.array(img)  
    # Put threshold to make it binary
    binarr = np.where(img>128, 255, 0)
    for elem in binarr:
        print(elem)
    # Covert numpy array back to image 
    binimg = Image.fromarray(binarr)
    print(binimg)

if __name__=="__main__":
    main()
