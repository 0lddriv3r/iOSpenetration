//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSBrowseReportHelper, NSMutableSet;

@interface FTSReportMgr : NSObject
{
    NSMutableSet *_resultHittedKeywordSet;
    NSMutableSet *_resultHittedKeywordSetForSubSearch;
    FTSBrowseReportHelper *_mainBrowseHelper;
    FTSBrowseReportHelper *_subBrowseHelper;
}

@property(retain, nonatomic) FTSBrowseReportHelper *subBrowseHelper; // @synthesize subBrowseHelper=_subBrowseHelper;
@property(retain, nonatomic) FTSBrowseReportHelper *mainBrowseHelper; // @synthesize mainBrowseHelper=_mainBrowseHelper;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSetForSubSearch; // @synthesize resultHittedKeywordSetForSubSearch=_resultHittedKeywordSetForSubSearch;
@property(retain, nonatomic) NSMutableSet *resultHittedKeywordSet; // @synthesize resultHittedKeywordSet=_resultHittedKeywordSet;
- (void).cxx_destruct;
- (void)reportKVMsgSearchInfo:(unsigned long long)arg1 pageType:(int)arg2 searchAgain:(BOOL)arg3 appendMode:(BOOL)arg4;
- (void)reportKVMsgResultClickType:(int)arg1 pageType:(int)arg2 showTalkerEntry:(BOOL)arg3;
- (void)reportIDKeyWithFTSDBUpgradeForCC;
- (void)createChatRoomOperationKVReport:(BOOL)arg1;
- (void)reportKVSearchGuideWeAppEntryDisplay:(id)arg1 appList:(id)arg2 stragetyId:(int)arg3;
- (void)weAppKVReportForScene:(BOOL)arg1 searchText:(id)arg2 opType:(int)arg3 opContent:(id)arg4 resultCount:(unsigned long)arg5 clickPos:(unsigned long)arg6;
- (void)cancelSearch;
- (unsigned long)getReportDeviceCode;
- (void)reportKVContactSearchInfo:(id)arg1;
- (void)reportIDKeyContactSearchTime:(unsigned long)arg1;
- (void)startBrowseSubSearchResult;
- (void)startBrowseMainSearchResult;
- (unsigned long)searchFavCount:(id)arg1;
- (BOOL)searchMatchFavItems:(id)arg1;
- (BOOL)searchMatchMemoryMsg:(id)arg1;
- (BOOL)searchMatchIndexMsg:(id)arg1;
- (unsigned long)searchMsgCount:(id)arg1;
- (BOOL)searchMatchMsg:(id)arg1;
- (unsigned long)searchGameCount:(id)arg1;
- (BOOL)searchMatchGame:(id)arg1;
- (unsigned long)searchFeatureCount:(id)arg1;
- (BOOL)searchMatchFeature:(id)arg1;
- (unsigned long)searchBrandContactCount:(id)arg1;
- (BOOL)searchMatchBrandContact:(id)arg1;
- (unsigned long)searchAddressBookCount:(id)arg1;
- (BOOL)searchMatchAddressBookContact:(id)arg1;
- (unsigned long)searchGroupCount:(id)arg1;
- (BOOL)searchMatchGroupContact:(id)arg1;
- (unsigned long)searchNormalContactCount:(id)arg1;
- (BOOL)searchMatchNormalContact:(id)arg1;
- (unsigned long)searchTopHitCount:(id)arg1;
- (BOOL)searchMatchTopHit:(id)arg1;
- (BOOL)searchMemoryDone:(id)arg1;
- (BOOL)searchFavDone:(id)arg1;
- (BOOL)searchMessageDone:(id)arg1;
- (void)reportGlobalSearchResult:(id)arg1;
- (void)logGroupHitPos:(unsigned long)arg1 totalCount:(unsigned long)arg2 isInMainPage:(BOOL)arg3 isClickMore:(BOOL)arg4;
- (void)logGroupHitPos:(unsigned long)arg1 totalCount:(unsigned long)arg2;
- (void)logGuidePageClick:(unsigned long long)arg1;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(BOOL)arg2 clickType:(unsigned long)arg3 cellStyle:(unsigned long)arg4;
- (void)clearCacheHitKeywordForSubSearch;
- (void)tryLogResultNoActionForSubSearch:(id)arg1 hasResult:(BOOL)arg2 displayInfo:(id)arg3 searchType:(int)arg4;
- (void)logHitResultForSubSearch:(id)arg1 searchType:(int)arg2 displayInfo:(id)arg3;
- (void)clearCacheHitKeyword;
- (BOOL)hasSearchResultToLogForHomePage;
- (void)tryLogResultNoActionWithDisplayInfo:(id)arg1;
- (void)logHitResult:(id)arg1 displayInfo:(id)arg2;
- (void)logResultActionItem:(id)arg1 actionType:(unsigned int)arg2 searchType:(unsigned int)arg3 displayInfo:(id)arg4;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)logInviteAddressFriend:(int)arg1;
- (void)logAddAddressFriend:(int)arg1;
- (void)logBeginSearch:(int)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (id)safeKVString:(id)arg1;
- (id)init;

@end

