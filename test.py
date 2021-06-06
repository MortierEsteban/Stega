from PIL import Image
import numpy as np

def main():
    compteur=0
    nbbyte=1
    byte=[]
    # Read Image 
    img= Image.open('/root/Stega/image.jfif')  
    # Convert Image to Numpy as array 
    img = np.array(img)  
    # Put threshold to make it binary
    binarr = np.where(img>128, 255, 0)
    recup_byte (binarr,byte)
    # Covert numpy array back to image 
    binimg = Image.fromarray(binarr)

if __name__=="__main__":
    main()

def recup_byte(binarr,byte=[]):
    compteur=0
    nbbyte=0
        for elem in binarr:
            while compteur <7 :
                byte [compteur][nbbyte]= elem%2
                compteur ++
                if compteur ==7:
                    compteur=0
                    nbbyte++

