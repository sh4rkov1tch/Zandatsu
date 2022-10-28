$fn=70;

iWallThickness = 2;

arrSzPCB = [210, 90, 1.6];
arrBackplaneDiffXY = [iWallThickness*2+1, iWallThickness*2+1, 0];
arrErrorMargin = [1, 1, 1];

iRoundedCornerDiam = 10;
arrRoundedCornerOffset = [iRoundedCornerDiam, iRoundedCornerDiam, 0];

iHeightPylone = 6;
iDiamPylone = 6;
iBackplaneThickness = 3;
iCaseThickness = iBackplaneThickness + 1.6 + iHeightPylone;
arrSzCase = arrSzPCB+arrBackplaneDiffXY-arrRoundedCornerOffset+[0, 0, iCaseThickness];
arrSzHole = arrSzPCB-arrRoundedCornerOffset+arrErrorMargin+[0, 0, iCaseThickness-iBackplaneThickness+0.1];

arrUSBSize= [10, 10, 4];


arrScrewPos = [
 [120, 4, -1.5],
 [120,86, -1.5],
 [206, 4, -1.5],
 [206,86, -1.5],
 [  4, 4, -1.5],
 [  4,86, -1.5]
];

arrUSBPos = [iWallThickness+110-arrUSBSize.x/2, 90, iHeightPylone-1.6-arrUSBSize.z/2];

translate(arrRoundedCornerOffset)
    difference(){
        difference(){
            minkowski(){
             cube(arrSzCase);
             cylinder(h=0.000000001, d=iRoundedCornerDiam);
            }
            translate([0, 0, iBackplaneThickness]+arrBackplaneDiffXY/2-arrErrorMargin/2)
                minkowski(){
                    cube(arrSzHole);
                    cylinder(h=0.000001, d=iRoundedCornerDiam);
                }
        translate(arrUSBPos-arrBackplaneDiffXY+[0, 0, 3])
            cube(arrUSBSize, center=true);
    }
}



for(screwPos = arrScrewPos){
   difference(){
       translate(arrRoundedCornerOffset/2+arrBackplaneDiffXY/2+[0, 0, iBackplaneThickness-0.2]+screwPos+[0, 0, 3])
        minkowski(){
        cylinder(h=iHeightPylone, d=iDiamPylone, center=true);
        cube([iDiamPylone/1.3, iDiamPylone/1.3, 0.01], center=true);
        }
       translate(arrRoundedCornerOffset/2+arrBackplaneDiffXY/2+[0, 0, iBackplaneThickness-0.2]+screwPos+[0, 0, 3])
        cylinder(h=iHeightPylone+0.1, d=iDiamPylone/1.6, center=true);
    }
}