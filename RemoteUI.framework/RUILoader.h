/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURL, RUIParser;

@interface RUILoader : RUIHTTPRequest  {
    RUIParser *_parser;
    NSURL *_url;
}


- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)loadXMLUIWithURL:(id)arg1;
- (void)loadXMLUIWithRequest:(id)arg1;
- (void)loadXMLUIWithData:(id)arg1 baseURL:(id)arg2;
- (void)_finishLoad;
- (id)URL;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)cancel;

@end
