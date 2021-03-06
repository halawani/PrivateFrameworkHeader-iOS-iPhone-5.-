/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UITableView;

@interface PSMovableListController : PSViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    struct __CFArray { } *_ordering;
    struct __CFSet { } *_disabledDomains;
    BOOL _isDirty;
}


- (struct __CFString { }*)reorderingKey;
- (struct __CFString { }*)defaultDomain;
- (id)allDomainKeys;
- (int)domainForKey:(const id)arg1;
- (int)domainCount;
- (void)defaultOrdering;
- (void)removeUnwantedDomains;
- (struct __CFString { }*)disabledKey;
- (void)_loadOrdering;
- (void)_loadEnabledState;
- (id)keyForDomain:(int)arg1;
- (id)displayNameForExtendedDomain:(int)arg1;
- (void)_saveIfNecessary;
- (id)stringForDomain:(int)arg1;
- (int)domainForIndexRow:(unsigned int)arg1;
- (void)_updateCell:(id)arg1 forDomain:(int)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)init;
- (void)dealloc;

@end
