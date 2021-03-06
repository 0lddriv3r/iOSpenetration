//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSMessageMgrExt.h"

@class NSString;

@interface FTSMsgDetailView : FTSResultView <IFTSMessageMgrExt>
{
}

- (void)onFTSDetailPageMessageResultChanged:(BOOL)arg1;
- (void)selectMsgItems:(id)arg1;
- (void)selectMsgItem:(id)arg1;
- (void)hideKeyboard;
- (BOOL)needNoResultTableFooterView;
- (BOOL)needSeperatedFooterInSection:(int)arg1;
- (BOOL)isDisplayTalkerSearchEntry;
- (BOOL)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (int)getRowCountForSection:(int)arg1;
- (int)getSectionCount;
- (BOOL)isSearchRunning;
- (BOOL)isUseSectionResult;
- (void)pop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cancelSearch;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

