/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class ESDContainer, ESDObject;

@interface PptHyperlinkBlock : NSObject  {
    ESDContainer *mInteractiveInfoContainerHolder;
    ESDObject *mTxInteractiveInfoAtomHolder;
}


- (id)interactiveInfoContainerHolder;
- (struct PptTxInteracInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; int x7; int x8; }*)txtInteractiveInfoAtom;
- (void)setInteractiveInfoContainerHolder:(id)arg1;
- (void)setTxInteractiveInfoAtomHolder:(id)arg1;

@end
