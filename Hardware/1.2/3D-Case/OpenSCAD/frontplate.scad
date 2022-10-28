$fn=75;
szMechanicalSwitch = 14; //Side size

module switchSlot(arrPos, angle=0){
 szMechanicalSwitch = 14.2;
 tabWidth = szMechanicalSwitch+2;
 tabHeight = 3.5;
 
 for(pos = arrPos){
 translate(pos)
  rotate([90, 0, angle]){
   cube(szMechanicalSwitch, center=true);
   translate([0, -6.1, 0])
      cube(19, center=true);
//   translate([0, 0, -4.05])
//     cube([tabWidth, tabWidth, tabHeight], center=true);
//   translate([0, 0, 4.05])
//     cube([tabWidth, tabWidth, tabHeight], center=true);
  }
 }
}

module screwSlot(arrPos, diameter=3, wallthickness=2, height=3){
 for(pos = arrPos){
  translate(pos){
   difference(){
    cylinder(h=height, d=diameter+wallthickness, center=true);
    cylinder(h=height+1, d=diameter, center=true);
   }
  }
 } 
}

arrScrewPos = [
 [120, 4, -1.5],
 [120,86, -1.5],
 [206, 4, -1.5],
 [206,86, -1.5],
 [  4, 4, -1.5],
 [  4,86, -1.5]
];


arrWasdPos = [
 [47, 60, 0],
 [21, 48, 0],
 [40, 41, 0],
 [59, 34, 0]
];

arrBtnPos = [
 [130, 40, 0],
 [130, 60, 0],
 [150, 65, 0],
 [150, 45, 0],
 [170, 60, 0],
 [170, 40, 0],
 [190, 58, 0],
 [190, 38, 0],
];

arrSecBtnPos = [
 [15, 80, 0],
 [25, 80, 0],
 [35, 80, 0],
 [45, 80, 0],
 [55, 80, 0]
];

szSecondaryButtons = 4.4; //Diameter
angleWasd = -20;

roundedCornerDiam = 10;
arrCompRd = [roundedCornerDiam/2, roundedCornerDiam/2];

arrSzPlate = [210-roundedCornerDiam, 90-roundedCornerDiam, 5];

difference(){
 union(){

  translate([roundedCornerDiam/2, roundedCornerDiam/2, 0])
 minkowski(){
  cylinder(d=roundedCornerDiam, h=0.0001, center=false);
  cube(arrSzPlate);
 }
 
}
 
 switchSlot(arrWasdPos, -20);
 switchSlot(arrBtnPos);

 for(secBtnPos = arrSecBtnPos){
   translate(secBtnPos){
    cylinder(d=szSecondaryButtons, h=arrSzPlate.z*2+1 , center=true);
    cube(8, center=true);
   }
}
 
// for(screwPos = arrScrewPos){
//    translate(screwPos){
//        cylinder(d=3.1, h=arrSzPlate.z*2, center=true);
//    }
//    translate(screwPos+[0, 0, 5]){
//        cylinder(d=6, h=4, center=true);
//    }
//}
}
//screwSlot(arrScrewPos, 2.5, 3.5);
