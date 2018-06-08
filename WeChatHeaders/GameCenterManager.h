//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "GameLibrarayLogicControllerDelegate.h"
#import "GameSearchManagerDelegate.h"
#import "GameSettingLogicControllerDelegate.h"
#import "IAPExt.h"
#import "IAppDataExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"

@class EntranceRedDot, GameCenterDetailLogicController, GameCenterNotifyContent, GameLibrarayLogicController, GameSearchManager, GameSearchRecommendList, GameSettingLogicController, GetGameCenterGlobalSettingResponse, GetGameIndex4Response, GetGameIndex4TabNavResponse, GetGameIndexForeignResponse, MMWebViewController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, WAAppIdToUsernameTransfer;

@interface GameCenterManager : MMService <MMWebViewDelegate, MMService, MMKernelExt, IAppDataExt, PBMessageObserverDelegate, GameLibrarayLogicControllerDelegate, GameSearchManagerDelegate, IAPExt, GameSettingLogicControllerDelegate>
{
    NSMutableArray *_gameIntroList;
    NSMutableDictionary *_gameDetailDict;
    NSMutableDictionary *_subscribeInfoDict;
    BOOL _gameIntroLoaded;
    NSMutableArray *_allGameList;
    NSMutableArray *_allMiniGameList;
    NSMutableDictionary *_appid2UrlInGlobalSearch;
    unsigned long _lastFetchCountryTime;
    NSString *_appStoreCountryCode;
    GameSearchRecommendList *_searchRecommendList;
    GetGameCenterGlobalSettingResponse *_gameGlobalSetting;
    NSMutableDictionary *_h5GameAppid2Menu;
    unsigned long _lastFetchGlobalSettingTime;
    GetGameIndexForeignResponse *_foreignHomeDataV4;
    GetGameIndex4TabNavResponse *_tabNavDataV5;
    GetGameIndex4Response *_homeDataV5;
    GameCenterDetailLogicController *_detailLogicController;
    GameLibrarayLogicController *_librarayLogicController;
    GameSettingLogicController *_settingLogicController;
    GameSearchManager *_searchMgr;
    NSString *_iapProductID;
    MMWebViewController *_floatLayerWebViewController;
    GameCenterNotifyContent *_h5floatLayerNotify;
    NSString *_floatLayerUrl;
    UIButton *_floatLayerCloseButton;
    EntranceRedDot *_entranceRedDot;
    NSMutableDictionary *_productId2AppStoreViewController;
    WAAppIdToUsernameTransfer *_weAppIDTransfer;
    NSMutableDictionary *_webVCKey2PrloadUrl;
    NSMutableDictionary *_url2PreloadWebVC;
    NSMutableSet *_preloadingWebVCSet;
}

@property(retain, nonatomic) NSMutableSet *preloadingWebVCSet; // @synthesize preloadingWebVCSet=_preloadingWebVCSet;
@property(retain) NSMutableDictionary *url2PreloadWebVC; // @synthesize url2PreloadWebVC=_url2PreloadWebVC;
@property(retain, nonatomic) NSMutableDictionary *webVCKey2PrloadUrl; // @synthesize webVCKey2PrloadUrl=_webVCKey2PrloadUrl;
@property(retain, nonatomic) WAAppIdToUsernameTransfer *weAppIDTransfer; // @synthesize weAppIDTransfer=_weAppIDTransfer;
@property(retain, nonatomic) NSMutableDictionary *productId2AppStoreViewController; // @synthesize productId2AppStoreViewController=_productId2AppStoreViewController;
@property(retain, nonatomic) EntranceRedDot *entranceRedDot; // @synthesize entranceRedDot=_entranceRedDot;
@property(retain, nonatomic) UIButton *floatLayerCloseButton; // @synthesize floatLayerCloseButton=_floatLayerCloseButton;
@property(retain, nonatomic) NSString *floatLayerUrl; // @synthesize floatLayerUrl=_floatLayerUrl;
@property(retain, nonatomic) GameCenterNotifyContent *h5floatLayerNotify; // @synthesize h5floatLayerNotify=_h5floatLayerNotify;
@property(nonatomic) __weak MMWebViewController *floatLayerWebViewController; // @synthesize floatLayerWebViewController=_floatLayerWebViewController;
@property(retain, nonatomic) NSString *iapProductID; // @synthesize iapProductID=_iapProductID;
- (void).cxx_destruct;
- (id)setAppStoreCountryCodeForTest:(id)arg1;
- (void)setGameDetailTypeViaSearch:(id)arg1;
- (void)onCloseH5FloatLayer;
- (void)closeH5FloatLayer;
- (void)closeH5FloatLayerForJsApi:(id)arg1;
- (void)gameButtonActionWithSubscribe:(id)arg1 Controller:(id)arg2 GameStatObject:(id)arg3;
- (void)handlePullGameTabNav:(id)arg1 Event:(unsigned long)arg2;
- (void)handlePullH5GameMenu:(id)arg1 Event:(unsigned long)arg2;
- (void)handlePullGameGlobalSetting:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)pullGameGlobalSetting;
- (void)handlePullFeedsListResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)handlePullNewHomeDataResponseV5:(id)arg1 Event:(unsigned long)arg2;
- (void)handlePullForeignHomeDataResponseV4:(id)arg1 Event:(unsigned long)arg2;
- (void)pullNewHomeDataFromServerV5:(BOOL)arg1;
- (void)pullForeignHomeDataFromServerV4:(BOOL)arg1;
- (id)transformStandardWebViewMenuList:(id)arg1;
- (id)getH5GameCustomMenuList:(id)arg1 IsShowOnSessionTop:(BOOL)arg2;
- (void)fetchH5GameCustomMenu:(id)arg1;
- (void)fetchGameGlobalSettingInstantly;
- (BOOL)fetchGameGlobalSettingIfNeeded;
- (BOOL)fetchHomeTabNavV5;
- (BOOL)fetchNextPageFeedsList:(id)arg1;
- (BOOL)fetchHomeDataV5WithoutFeedsList:(BOOL)arg1;
- (BOOL)fetchForeignHomeDataV4:(BOOL)arg1;
- (void)sendGetSearchGameListReq:(unsigned long)arg1;
- (void)getAllGameList:(BOOL)arg1;
- (void)sendGetSearchMiniGameListReq:(unsigned long)arg1;
- (id)mergeLocalMiniGameAndSearchGameList;
- (void)getAllMiniGameList:(BOOL)arg1;
- (void)gameSearchManager:(id)arg1 didFinishSearchWithResultGroups:(id)arg2 searchWithText:(id)arg3 error:(int)arg4;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)onGetLibGameList:(id)arg1 errCode:(int)arg2;
- (void)getMoreGameListGameType:(unsigned long)arg1 ClassifyID:(id)arg2 startOffset:(unsigned long)arg3 limit:(int)arg4;
- (void)getLibGameListSortType:(unsigned long)arg1 startOffset:(unsigned long)arg2 limit:(int)arg3 isFirstTime:(BOOL)arg4;
- (void)onGetUpList:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onUpFriend:(id)arg1 appID:(id)arg2 errCode:(int)arg3;
- (void)onGetGameDetailInfo:(id)arg1 errCode:(int)arg2;
- (void)getUpListWithAppID:(id)arg1;
- (void)upFriend:(id)arg1 appID:(id)arg2;
- (void)getNewGameDetailInfo:(id)arg1;
- (void)onActionJumpReport:(int)arg1 DataItem:(id)arg2 DefinitelyOptype:(int)arg3 StatAction:(int)arg4 NeverNoticeAgain:(BOOL)arg5;
- (void)onGameActionJump:(int)arg1 DataItem:(id)arg2 NavigationController:(id)arg3 QuitFullScreenBlock:(CDUnknownBlockType)arg4;
- (BOOL)jumpToCanvasView:(id)arg1 NavigationController:(id)arg2;
- (id)getGameTailButton:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)fetchAppStoreRegion;
- (void)saveCountryInfoToFile;
- (void)loadCountryInfoFromFile;
- (id)getAppStoreCountryCode;
- (void)releaseLastH5FloatLayer;
- (void)addTransparentH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (void)pushFullScreenH5FloatLayer:(id)arg1 HomeViewController:(id)arg2;
- (id)getGameCenterEntryInfo;
- (id)topBackgroundColor;
- (id)globalStatusBarStyle;
- (BOOL)useTopWhiteStyle;
- (id)getDetailUrlGlobalSearch:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)onGameSetBlockState:(BOOL)arg1 appID:(id)arg2 error:(int)arg3;
- (void)onGameGetBlockState:(BOOL)arg1 appID:(id)arg2 error:(int)arg3;
- (void)setGameBlockState:(id)arg1 onOrOff:(BOOL)arg2;
- (BOOL)getGameBlockState:(id)arg1;
- (BOOL)isGameSubscribedWithAppID:(id)arg1;
- (id)getGameSearchRecommendList;
- (void)saveGameSearchRecommendList:(id)arg1;
- (void)handleGameReportResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)handleGameSearchSmartBoxResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)handleGetAllGameListResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)handleGetAllMiniGameListResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)handleSubscribeNewGameResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)subscribeNewGameWithAppID:(id)arg1 hasEnableChatRoom:(BOOL)arg2 noticeID:(id)arg3;
- (void)loadSubscribeDataFromFile;
- (void)saveSubscribeDataToFile;
- (id)recentGameInfoArrayToLogString:(id)arg1;
- (id)gameBriefInfoArrayToLogString:(id)arg1;
- (id)appInfoArrayToLogString:(id)arg1;
- (void)forceUpdateNewGameAppInfo;
- (id)getLocalHomeTabNavV5;
- (id)getLocalHomeDataV5;
- (id)getLocalForeighHomeDataV4;
- (void)loadCachedHomeDataV5;
- (void)loadCachedTabNavData;
- (void)loadCachedForeignHomeDataV4;
- (void)loadGameGlobalSettingDataFromFile;
- (void)saveGlobalSettingFetchInfoToFile;
- (void)loadGameGlobalSettingFetchInfoFromeFile;
- (BOOL)loadDataFromFile:(id)arg1 ToClass:(Class)arg2 ToData:(id *)arg3;
- (void)saveGameGlobalSettingToFile;
- (void)saveHomeDataToFileV5;
- (void)saveForeignHomeDataToFileV4;
- (BOOL)saveDataToCacheFile:(id)arg1 Path:(id)arg2;
- (void)onManulLoginOK;
- (void)sendGameSearchSmartBoxRequest:(id)arg1;
- (BOOL)requestGameSearch:(id)arg1;
- (void)setLocalGameDetailInfo:(id)arg1;
- (id)getLocalGameDetailInfoWithAppID:(id)arg1;
- (void)loadGlobalSearchGameList;
- (void)saveGlobalSearchMiniGameList;
- (void)loadGlobalSearchMiniGameList;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (BOOL)jumpToAppstoreWithUrl:(id)arg1;
- (int)jumpAppStore:(id)arg1 DowLoadUrl:(id)arg2;
- (void)launchWeApp:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 NavigationController:(id)arg4 CompleteBlock:(CDUnknownBlockType)arg5;
- (BOOL)launchWeAppWithAppId:(id)arg1 pagePath:(id)arg2 referrerAppID:(id)arg3 NavigationController:(id)arg4 CompleteBlock:(CDUnknownBlockType)arg5;
- (BOOL)tryJumpWeapp:(id)arg1 NavigationController:(id)arg2;
- (int)tryJumpWeAppOrH5:(id)arg1 Url:(id)arg2 H5EntryScene:(id)arg3;
- (BOOL)tryLaunchGameOrJumpDetail:(id)arg1 GameInfo:(id)arg2 AppMessage:(id)arg3 SourceScene:(int)arg4 NeedUpdateLocalDetailInfo:(BOOL)arg5 LaunchGameResultBlock:(CDUnknownBlockType)arg6;
- (BOOL)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 MessageExt:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (BOOL)tryLaunchGameOrJumpAppStore:(id)arg1 AppId:(id)arg2 AppMessage:(id)arg3 DowLoadUrl:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (BOOL)tryLaunchGameOrJumpAppStoreInGameHome:(id)arg1 GameInfo:(id)arg2 ShouldJumpH5Game:(BOOL)arg3 MessageExt:(id)arg4 LaunchGameResultBlock:(CDUnknownBlockType)arg5;
- (BOOL)tryLaunchGameOrJumpUrl:(id)arg1 AppID:(id)arg2 MessageExt:(id)arg3 UrlString:(id)arg4 ExtraInfo:(id)arg5 LaunchGameResultBlock:(CDUnknownBlockType)arg6;
- (BOOL)launchGameWithFailProcess:(id)arg1 AppStoreUrl:(id)arg2 LauchGameResultBlock:(CDUnknownBlockType)arg3;
- (int)reportLaunchGameSuccess:(id)arg1;
- (BOOL)launchGameWithFailProcess:(id)arg1 Message:(id)arg2 AppStoreUrl:(id)arg3 LauchGameResultBlock:(CDUnknownBlockType)arg4;
- (void)jumpToWebView:(id)arg1 JumpUrl:(id)arg2 Title:(id)arg3;
- (int)getGameDetailJumpTypeAndUrl:(id)arg1 DetailUrl:(id *)arg2;
- (id)getGameCenterDetailViewController:(id)arg1 sourceScene:(int)arg2;
- (id)getGameNativeMsgCenterViewController:(int)arg1;
- (id)getGameCenterLibraryViewController:(int)arg1;
- (id)urlAppending:(id)arg1 AppendingStr:(id)arg2;
- (id)getGameCenterHomeWebViewController:(id)arg1 SourceScene:(int)arg2 HasFloatLayer:(BOOL)arg3;
- (void)setRedDotBeforeHomeCgi:(id)arg1;
- (id)getGameCenterForeignNativeHomeViewController:(int)arg1 EntranceRedDot:(id)arg2;
- (id)getGameCenterNativeHomeViewControllerV5:(int)arg1 EntranceRedDot:(id)arg2;
- (id)getGameCenterHomeViewController:(int)arg1 EntranceRedDot:(id)arg2 webviewInfo:(id)arg3;
- (id)getGameCenterHomeViewController:(int)arg1 EntranceRedDot:(id)arg2 JumpAction:(int *)arg3;
- (int)openGameDetailViewWithGameInfo:(id)arg1 navigationController:(id)arg2 NeedUpdateLocalDetailInfo:(BOOL)arg3 sourceScene:(int)arg4;
- (void)openGameCenterDetailView:(id)arg1 appId:(id)arg2 sourceScene:(int)arg3 webviewInfo:(id)arg4;
- (id)urlForGameMessageCenter;
- (id)urlForGameLibraryView;
- (id)urlForGameDetailView;
- (id)urlForGameHomepageView;
- (int)viewTypeForMessageCenter;
- (int)viewTypeForLibrary;
- (int)viewTypeForDetailView;
- (void)reportGameHomeABTest:(id)arg1 SourceScene:(int)arg2 JumpType:(int)arg3 JumpUrl:(id)arg4;
- (int)viewTypeForHomepage:(int)arg1;
- (id)_getValidPreloadWebViewController:(id)arg1;
- (id)getPreloadWebViewControllerWithOnlyPrefix:(id)arg1;
- (id)getPreloadWebViewControllerWithFullUrl:(id)arg1;
- (id)checkIfUrlHasPreloadWebVC:(id)arg1;
- (id)getWebViewControllerWithPreload:(id)arg1 Url:(id)arg2;
- (void)tryDeleteIfExceedPreloadMaxCount;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (BOOL)_preloadlGameUrl:(id)arg1 EntryScene:(id)arg2 FromJspi:(BOOL)arg3 ExtraInfo:(id)arg4;
- (BOOL)preloadDetailUrlFromGameEntry;
- (id)getUniqueKeyForWebViewController:(id)arg1;
- (BOOL)preloadUrl:(id)arg1 ForWebVC:(id)arg2;
- (id)getProductIdFrom:(id)arg1;
- (void)refreshAppStoreViewControllerWhenDismiss:(id)arg1 AppStoreViewController:(id)arg2;
- (void)preloadOneAppStoreViewController:(id)arg1 AppStoreUrl:(id)arg2;
- (id)getPreloadAppStoreViewController:(id)arg1;
- (BOOL)preloadAppStoreViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

