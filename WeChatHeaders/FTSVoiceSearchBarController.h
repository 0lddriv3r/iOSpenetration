//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMVoiceSearchBar.h"

#import "ContactInfoViewControllerDelegate.h"
#import "ContactPickerViewDelegate.h"
#import "FTSAddressBookFriendCellDelegate.h"
#import "FTSContactCellDelegate.h"
#import "FTSFeatureDetailViewDelegate.h"
#import "FTSResultViewDelegate.h"
#import "FTSWebSearchViewDelegate.h"
#import "IFTSContactMgrExt.h"
#import "IFTSFavMgrExt.h"
#import "IFTSMemorySearchMgrExt.h"
#import "IFTSMessageMgrExt.h"
#import "IFtsWebSearchExt.h"
#import "IMiniGameSearchExt.h"
#import "IWALocalSearchExt.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCPayWalletLockVerifyLogicDelegate.h"
#import "WCWebSearchViewControllerDelegate.h"
#import "WebSearchLocalPageCellDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class AddressBookFriend, AttributeLabel, CContact, CContactVerifyLogic, ContactInfoViewController, FTSSearchLocalPageResultWrap, FTSWebSearchController, NSMutableArray, NSMutableDictionary, NSString, UIPercentDrivenInteractiveTransition, UIView, WAMainListViewController, WCTimeLineFooterView, WCWebSearchViewControllerNewH5;

@interface FTSVoiceSearchBarController : MMVoiceSearchBar <FTSWebSearchViewDelegate, IWALocalSearchExt, ContactPickerViewDelegate, WCPayWalletLockVerifyLogicDelegate, IFtsWebSearchExt, WebSearchLocalPageCellDelegate, IMiniGameSearchExt, FTSFeatureDetailViewDelegate, WCWebSearchViewControllerDelegate, FTSContactCellDelegate, FTSAddressBookFriendCellDelegate, contactInfoDelegate, ContactInfoViewControllerDelegate, PBMessageObserverDelegate, contactVerifyLogicDelegate, FTSResultViewDelegate, IFTSContactMgrExt, IFTSMessageMgrExt, IFTSFavMgrExt, IFTSMemorySearchMgrExt, MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, MMUIViewControllerDelegate>
{
    map_69681069 _mapSearchSectionType;
    AddressBookFriend *_curAddressBookFriend;
    ContactInfoViewController *_curAddressBookFriendView;
    CContact *_curContact;
    CContactVerifyLogic *_contactVerifyLogic;
    int _findType;
    UIView *_grayBlurView;
    int _searchScene;
    AttributeLabel *_emptyTipLabel;
    UIView *_emptyFooterView;
    WCTimeLineFooterView *_loadingFooterView;
    NSString *_newestSearchText;
    UIView *_weakFTSWebSearchViewCell;
    struct CGRect _currentKeyboardRect;
    BOOL _hasClickAnyResultDuringOneSearch;
    NSMutableDictionary *_dicDisplayInfo;
    NSString *_lastMonitorReportText;
    WAMainListViewController *_cacheWAListViewController;
    FTSWebSearchController *_webSearchController;
    FTSSearchLocalPageResultWrap *_localPageResultWrap;
    UIView *_weakFTSWebSearchLocalPageCell;
    NSMutableArray *_arrHasLogSearchLocalPageShowQuery;
    WCWebSearchViewControllerNewH5 *_webSearchViewController;
    int _currentFeatureId;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) int currentFeatureId; // @synthesize currentFeatureId=_currentFeatureId;
@property(readonly, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
@property(retain, nonatomic) UIView *grayBlurView; // @synthesize grayBlurView=_grayBlurView;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)preOpenWebSearchView:(id)arg1 baseUrlParams:(id)arg2;
- (void)onForbidCacheWCWebSearchView;
- (void)onWCWebSearchViewReturn;
- (void)tryPreloadWCWebSearchWebview;
- (void)onSelectCancel;
- (void)onCreateChatRoom:(id)arg1;
- (void)openContactPickerView;
- (id)parseSeperatedKeyword:(id)arg1;
- (BOOL)isCreateChatRoomCellAtRow:(int)arg1;
- (BOOL)shouldDisplayChatRoomEntry;
- (void)weAppSearchResultKVReport:(id)arg1;
- (id)addFTSResultCountLogParams:(id)arg1;
- (BOOL)searchMiniGameDone:(id)arg1;
- (BOOL)searchWeAppDone:(id)arg1;
- (BOOL)searchMemoryDone:(id)arg1;
- (BOOL)searchFavDone:(id)arg1;
- (BOOL)searchMessageDone:(id)arg1;
- (void)tryDoMonitorReport:(id)arg1;
- (void)walletLockVerifySuccess:(id)arg1;
- (id)getViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewWillPop;
- (void)onWebSearchViewReturn:(BOOL)arg1;
- (void)onFTSDetailViewReturn:(BOOL)arg1;
- (void)asyncCancelSearchDelay:(double)arg1;
- (void)asyncCancelSearch;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onUpdateContact:(id)arg1;
- (void)onRemoveContact;
- (void)onAddContact;
- (void)onFTSSelectAddressBookFriend:(id)arg1;
- (void)selectAddressBookFriend:(id)arg1;
- (void)operateAddressBookFriend:(id)arg1;
- (void)didShowWARecommendPanel;
- (void)prepareWAListViewController;
- (void)onCancelInteractivePushWAHistoryVC;
- (void)onFinishInteractivePushWAHistoryVC;
- (void)onUpdateInteractivePushWAHistoryVCPercent:(float)arg1;
- (void)onBeginInteractivePushWAHistoryVC;
- (void)onOpenWeAppOutItem:(id)arg1 index:(int)arg2;
- (void)onOpenWeAppList;
- (void)onClickBarButton:(id)arg1;
- (void)startCommonSearch:(id)arg1;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)startWebSearch:(id)arg1 urlParams:(id)arg2;
- (void)searchFavItems;
- (void)selectFavSearchItem:(id)arg1;
- (void)selectMsgTalkerSearchEntry;
- (void)searchMessage;
- (void)selectMsgItems:(id)arg1;
- (void)selectMsgItem:(id)arg1;
- (void)addContact:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)addContactInternal;
- (void)sendSMS:(id)arg1 arrMobile:(id)arg2;
- (void)sendSMSInvite:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)showAlert:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showWCGameWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)searchGameItems:(int)arg1;
- (void)selectWCGameItem:(id)arg1;
- (void)selectFeatureItem:(id)arg1;
- (void)onFeatureDetailViewSelectItem:(id)arg1;
- (void)searchMoreFeatureItems;
- (void)openPrivateConfigView;
- (void)openWeSportFeature;
- (void)openChatMigrationVC;
- (void)openBalanceFeature;
- (void)openOfflinePayFeature;
- (void)openFacingRecvMoneyFeature;
- (void)openWXHongBao;
- (void)openWCPayView;
- (void)openFavoriteView;
- (void)openEmoticonStoreView;
- (void)openMessageContentViewForFileHelper;
- (void)openMessageContentViewForFeature:(int)arg1;
- (void)openContactInfoForFeature:(int)arg1;
- (void)openGameCenter:(id)arg1;
- (void)openCameraScan;
- (void)openAlbum;
- (void)openShake;
- (void)openLBS;
- (void)openFloatBottle;
- (void)openMobileRecharge;
- (void)openWeAppWithSchemeUrl:(id)arg1;
- (BOOL)isPluginOpen:(int)arg1;
- (void)jumpFeatureUrl:(id)arg1;
- (void)searchMoreFollowedBrandContact;
- (void)searchMoreContact:(int)arg1;
- (void)onFTSChatWithContact:(id)arg1;
- (void)openContactInfo:(id)arg1 fromSearchContact:(BOOL)arg2;
- (void)openContactInfo:(id)arg1;
- (BOOL)isOpenPluginContactInfoView:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1;
- (void)openEnterpriseBrandSessionListViewController:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openMiniGameForUsername:(id)arg1;
- (void)openWeAppWithContact:(id)arg1 withSceneNote:(id)arg2;
- (void)openMessageContentView:(id)arg1;
- (void)openWeAppSessionView;
- (void)openBrandSessionView;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(int)arg2 searchId:(id)arg3;
- (void)onSearchLocalPageResultFail;
- (void)onSearchLocalPageResultRtn:(id)arg1;
- (void)doSearchLocalPageRequest:(id)arg1;
- (void)addContactFriendScene:(id)arg1;
- (void)onlineSearchContact;
- (id)filterUserName:(id)arg1;
- (void)onMiniGameSearchResultChanged;
- (void)onWASearchResultChanged;
- (void)onFTSHomePageFavResultChanged;
- (void)onFTSHomePageMessageResultChanged:(BOOL)arg1;
- (void)tryRefreshSearchResult;
- (void)onFTSMemorySearchResultChanged:(BOOL)arg1;
- (void)onFTSContactSearchResultChanged:(BOOL)arg1;
- (void)onClickSearchButton:(id)arg1;
- (void)handleTextDidChange:(id)arg1;
- (void)scrollToTop;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)cancelFTSSearch;
- (void)trySwitchSearchLoading;
- (void)doFTSSearch:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)shouldForbidSelectAtIndexpath:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (unsigned long)getLogRowBeforeSectionType:(unsigned int)arg1 queryText:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)isDisplayTalkerSearchEntry;
- (BOOL)isMsgTalkerSearchEntry:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setLoadingStatus;
- (void)resetSearchSectionType;
- (void)resetSearchTableViewSize;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)removeWebSearchView;
- (void)clearAllResource;
- (void)updateWebSearchCellVisualbility;
- (void)tryLogFTSWebSearchLocalPageCellShow;
- (void)resetShowCellForType:(int)arg1;
- (void)markShowCellForType:(int)arg1 resultCount:(unsigned long)arg2;
- (void)markShowCellForType:(int)arg1;
- (BOOL)hasShownCellForType:(int)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)getDetailView;
- (void)handleRotateEvent;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4 hasIndexBar:(BOOL)arg5;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4;
- (void)initFTSSearchBar;
- (id)sectionType2String:(unsigned long)arg1;
- (id)getGeneralBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

