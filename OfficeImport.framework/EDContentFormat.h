/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
    EDString *mFormatString;
    unsigned int mFormatId;
    boolmBuiltIn;
    boolmReferenced;
}

+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned int)arg2 builtIn:(bool)arg3;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned int)arg2;
+ (id)contentFormatWithFormatString:(id)arg1;

- (void)setFormatId:(unsigned int)arg1;
- (void)setReferenced:(bool)arg1;
- (id)formatString;
- (unsigned int)formatId;
- (bool)builtIn;
- (bool)referenced;
- (BOOL)isEqualToContentFormat:(id)arg1;
- (unsigned int)key;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end
