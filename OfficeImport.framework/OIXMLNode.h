/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OIXMLNode : NSObject <NSCopying> {
    unsigned int _kind;
    NSString *_name;
    id _value;
}

+ (id)textWithStringValue:(id)arg1;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString { }*)arg3;
+ (void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(struct __CFString { }*)arg5;

- (id)initWithKind:(unsigned int)arg1 name:(id)arg2 stringValue:(id)arg3;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)openingTagString;
- (id)contentString;
- (id)closingTagString;
- (id)initWithKind:(unsigned int)arg1;
- (id)XMLString;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (unsigned int)kind;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end
