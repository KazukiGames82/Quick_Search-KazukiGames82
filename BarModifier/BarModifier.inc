;----------------------------------------------------
; Styles
;----------------------------------------------------

[Quick_Search-KazukiGames82.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
ImageAlpha=0

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Quick_Search-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle | Quick_Search-KazukiGames82_Style_[#Quick_Search-KazukiGames82___Use_Colored_Icon]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#/(#NetworkStatusVar#=1?1:2))
SolidColor=0,0,0,0
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
Group=CustomApp[#Quick_Search-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Quick_Search-KazukiGames82]] | CustomAppButton | Quick_Search-KazukiGames82 | WifiSys