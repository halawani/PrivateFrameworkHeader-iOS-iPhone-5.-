/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUClassInfoMap : NSObject <NSCoding> {
    void *_cppMap;
}

+ (void)initialize;
+ (id)infoMap;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateWithBlock:(id)arg1;
- (void)addClassInfosFromMap:(id)arg1;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (unsigned int)count;
- (id)init;
- (void)dealloc;

@end
