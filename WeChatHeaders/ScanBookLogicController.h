//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "BookScannerDelegate.h"
#import "CameraScannerStatusExt.h"
#import "IScanBookMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class BookScanner, NSString;

@interface ScanBookLogicController : BaseScanLogicController <CameraScannerStatusExt, BookScannerDelegate, IScanBookMgrExt, WCActionSheetDelegate, UIAlertViewDelegate>
{
    BookScanner *_scanner;
    int _unrecoCount;
    BOOL _isSearching;
    NSString *_alertText;
}

- (void).cxx_destruct;
- (void)onGotScanItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onRotate;
- (void)showUnrecoAlert;
- (void)onScanBookError:(int)arg1;
- (void)onSendDataLength:(unsigned int)arg1;
- (void)onScanTimeout;
- (id)getAlertText;
- (id)getInfoText;
- (struct CGRect)getDrawCropRect;
- (void)stopScan;
- (void)setCropRect;
- (void)startScan;
- (void)onCameraScannerViewDidInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

