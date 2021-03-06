//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSMessageMgrExt.h"

@class CContact, NSArray, NSMutableArray, NSString, SearchMatchTip;

@interface FTSMsgScopeView : FTSResultView <IFTSMessageMgrExt>
{
    CContact *_session;
    NSArray *_arrTargetSessionMsgItems;
    CContact *_talkerContact;
    SearchMatchTip *_talkerMatchTip;
    NSString *_talkerQuery;
    NSMutableArray *_arrExpandStatus;
    BOOL _isDetailRestrictSearch;
}

@property(nonatomic) BOOL isDetailRestrictSearch; // @synthesize isDetailRestrictSearch=_isDetailRestrictSearch;
- (void).cxx_destruct;
- (void)setExpandStatus:(BOOL)arg1 forSection:(int)arg2;
- (BOOL)isExpandingForSection:(int)arg1;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (BOOL)shouldDisplayMoreCellInSection:(int)arg1;
- (void)onFTSRestrictSearchResultChanged:(BOOL)arg1;
- (void)selectMsgItems:(id)arg1 withInTalkerContact:(id)arg2 andTalkerMatchTip:(id)arg3;
- (void)selectMsgItem:(id)arg1;
- (void)hideKeyboard;
- (void)onLoadMore;
- (BOOL)hasMoreData;
- (BOOL)hasSearchDone:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (BOOL)isSearchRunning;
- (BOOL)isUseSectionResult;
- (int)getRowCountForSection:(int)arg1;
- (int)getSectionCount;
- (BOOL)needNoResultTableFooterView;
- (BOOL)needSeperatedFooterInSection:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)popForSubResultView:(BOOL)arg1;
- (void)pop;
- (void)prePopHandle;
- (int)convertPageType;
- (BOOL)isDisplayTalkerSearchEntry;
- (BOOL)isTalkerSearchEntry:(int)arg1;
- (void)cancelSearch;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)configTagSearchLogicForSession:(id)arg1 andSessionResult:(id)arg2 andTalkerContact:(id)arg3 andTalkerMatchTip:(id)arg4 andTalkerQuery:(id)arg5 andSearchText:(id)arg6 bSessionFirst:(BOOL)arg7;
- (void)dealloc;
- (void)initData;
- (id)initWithSearchBar:(id)arg1 frame:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

