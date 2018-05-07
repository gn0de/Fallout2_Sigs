//HANDLE hFO2 = FindWindow(NULL, TEXT("Fallout II  @WIDTH   ")); //GNW95 Class

#define SkillsSig "\x89\x58\x00\x85\xc9\x7c" //89 58 04 85 C9 7C
//#define SkillsSigIDA "89 58 ? 85 c9 7c"
#define SkillsMask "xx?xxx"

/*
mov [eax+04],ebx
test ecx,ecx
 */

#define CharacterPointSubSig "\x29\x35\x00\x00\x00\x00\xeb" //29 35 38 85 51 00
//#define CharacterPointSubIDA "29 35 ? ? ? ? eb"
//#define CharacterPointSubArray "00 00 02 00 00 00 01 00 00 00 17 00 00 00 18 00 00 00 BD 00 00 00 53 00 00 00 0A 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1B 00 00 00"
#define CharacterPointSubMask "xx????x"

/*
sub [fallout2HR.exe+118538],esi
*/

#define CharacterPointAddSig "\x01\x35\x00\x00\x00\x00\x8b\x5c" //01 35 38 85 51 00
//#define CharacterPointAddIDA "01 35 ? ? ? ? 8b 5c"
#define CharacterPointAddMask "xx????xx"

/*
add [fallout2HR.exe+118538],esi
*/

#define ChracterAgeSig "\x89\x58\x00\x85\xc9\x7c" //89 58 04 85 C9 7C
//#define ChracterAgeIDA "89 58 ? 85 c9 7c"
#define ChracterAgeMask "xx?xxx"

/*
mov [eax+04],ebx
test ecx,ecx
*/

#define CharacterTagSkillsSig "\x89\x15\x00\x00\x00\x00\x83\xc5" //89 15 10 0A 57 00 83
//#define CharacterTagSkillIDA "89 15 ? ? ? ? 83 c5"
#define CharacterTagSkillsMask "xx????xx"

/*
mov [fallout2HR.exe+170A10],edx
*/

#define ActionWalkSig "\x89\x4e\x00\xeb\x00\x89\x7e" //89 4E 40 EB 03
//#define ActionWalkIDA "89 4e ? eb ? 89 7e"
#define ActionWalkMask "xx?x?xx"

/*
mov [esi+40],ecx
jmp fallout2HR.exe+17699
*/

#define PlayerHealthSig "\x89\x53\x00\x39\xd0" //89 53 2C 39 D0
//#define PlayerHealthIDA "89 53 ? 39 d0"
#define PlayerHealthMask "xx?xx"

/*
 mov [ebx+2C],edx
 cmp eax,edx
*/

#define PlayerSkillPointsSig "\x89\x14\x00\x00\x00\x00\x00\x83\xfb\x00\x75\x00\xba" //89 14 9D AC 81 66 00
//#define PlayerSkillPointsIDA "89 14 ? ? ? ? ? 83 fb ? 75 ? ba"
#define PlayerSkillPointsMask "xx?????xx?x?x"

/*
mov [ebx*4+fallout2HR.exe+2681AC],edx
*/

#define DDRAWDirectDrawCreateItemsSig "\x89\x0c\x00\x00\x00\x00\x00\x8d\x76" //89 0C 85 B0 7E 6B 05
//#define DDRAWDirectDrawCreateItemsIDA "89 0c ? ? ? ? ? 8d 76"
#define DDRAWDirectDrawCreateItemsMask "xx?????xx"

/*
Direct X

HRESULT WINAPI DirectDrawCreate(
  _In_  GUID FAR         *lpGUID,
  _Out_ LPDIRECTDRAW FAR *lplpDD,
  _In_  IUnknown FAR     *pUnkOuter
);

*/

/*
mov [eax*4+DDRAW.dll+57EB0],ecx
*/

#define AbleToWalkCrosshairSig "\x89\x50\x00\x31\xc0\xeb\x00\xb8\x00\x00\x00\x00\x83\xc4\x00\x5f\x5e\x59\xc3\x8d\x40" //89 50 20 31 C0
//#define AbleToWalkCrosshairIDA "89 50 ? 31 c0 eb ? b8 ? ? ? ? 83 c4 ? 5f 5e 59 c3 8d 40"
#define AbleToWalkCrosshairMask "xx?xxx?x????xx?xxxxxx"

/*
Address: 0DEA9880
Value: 100663296 //Able to walk
Value: 100663297 //Not able to walk
*/


/*
mov [eax+20],edx
xor eax,eax
*/
