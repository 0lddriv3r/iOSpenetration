//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingBaseViewController.h"

@interface PushNoDisturbViewController : SettingBaseViewController
{
    unsigned long m_uSelectedRow;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCloseCell:(id)arg1;
- (void)makeOpenAtNightCell:(id)arg1;
- (void)makeOpenCell:(id)arg1;
- (void)doConfigNoDisturb:(unsigned long)arg1;
- (void)sendNoDisturbOplog;
- (void)saveLocalSetting:(unsigned long)arg1;
- (void)onReturn;
- (void)onSave;
- (void)viewDidLoad;
- (unsigned long)getSelectedRow;
- (void)viewDidLayoutSubviews;

@end

