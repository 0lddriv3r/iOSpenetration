//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FileDetailLogicDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WKNavigationDelegate.h"

@class FileDetailLogicController, MMMPMoviePlayerController, MMProgressView, NSString, ShareDataToOpenSDKController, UIButton, UIDocumentInteractionController, UILabel, UITapGestureRecognizer, UIView, WCActionSheet;

@interface FileDetailViewController : MMUIViewController <WCActionSheetDelegate, FileDetailLogicDelegate, UIDocumentInteractionControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate, WKNavigationDelegate>
{
    FileDetailLogicController *m_logicController;
    BOOL m_bDownloading;
    BOOL m_bIsDelayingDownload;
    MMProgressView *m_viewProgress;
    UILabel *m_labProgress;
    UIButton *m_btnCancelDownload;
    UIButton *m_btnDownload;
    UILabel *m_labCannotOpen;
    UIButton *m_btnViewDetail;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelFileName;
    BOOL m_bPreview;
    unsigned long m_uiPreviewType;
    UIDocumentInteractionController *m_vcDocument;
    BOOL m_bOpenMode;
    MMMPMoviePlayerController *_moviePlayerController;
    WCActionSheet *m_actionSheet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    UIView *m_webView;
    BOOL _bIsNaviBarHide;
    UITapGestureRecognizer *_singleTapRec;
    BOOL _bIsDisableTapRec;
    struct CGPoint m_lastContentOffset;
    UIButton *m_shareToFriendBtn;
    BOOL m_showInfoOnly;
    NSString *_m_tmpFilePath;
}

@property(retain, nonatomic) NSString *m_tmpFilePath; // @synthesize m_tmpFilePath=_m_tmpFilePath;
@property(nonatomic) BOOL m_bOpenMode; // @synthesize m_bOpenMode;
@property(nonatomic) BOOL m_showInfoOnly; // @synthesize m_showInfoOnly;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)getCurrentViewController;
- (void)onCanShareToFriendByButton;
- (void)onRevoked;
- (void)onDownloadFilePartLen:(unsigned long)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)onDownloadFileFail:(BOOL)arg1;
- (void)initShareToFriendBtn;
- (void)onSingleTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetPdfViewFrame;
- (BOOL)hasPdfView;
- (void)setNaviBarHide:(BOOL)arg1 animation:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)SetProgressPartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (void)ShowProgressView;
- (void)ShowDownloadBtn;
- (void)StopDownloadAndUpdateView;
- (void)StopDownload;
- (void)StartDownload:(id)arg1;
- (BOOL)isExceptionFileName:(id)arg1;
- (void)OnReturn;
- (void)OnOperate:(id)arg1;
- (void)InitDownload;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)OnOpenByApp:(id)arg1;
- (id)getToSaveUrl;
- (void)OnLookDetail;
- (void)InitInfoiew;
- (void)InitPreview;
- (void)updateWebScrollViewInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)SetDownloadHide:(BOOL)arg1;
- (void)SetProgressHide:(BOOL)arg1;
- (id)GetFileDisplayName;
- (void)dealloc;
- (void)SafeDeleteDocument;
- (void)setLogicController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

