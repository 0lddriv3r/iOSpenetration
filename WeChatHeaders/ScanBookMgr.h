//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class MMTimer, NSData, NSString;

@interface ScanBookMgr : MMService <MMService, PBMessageObserverDelegate>
{
    unsigned int _scanBookId;
    unsigned int _sessionId;
    unsigned int _opCode;
    NSData *_dataToSend;
    unsigned int _totalLen;
    unsigned int _offset;
    unsigned int _lastPackLen;
    int _imageType;
    int _uploadAction;
    BOOL _isUploading;
    MMTimer *_uploadTimer;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)saveProductItem:(id)arg1;
- (id)getLocalProductItemById:(id)arg1;
- (void)checkUpload;
- (void)stop;
- (void)start;
- (id)getProductItemById:(id)arg1 Scence:(unsigned int)arg2 QRCodeUrl:(id)arg3;
- (int)sendSBImage:(id)arg1 BufLen:(unsigned int)arg2 ImageType:(int)arg3 OPCode:(unsigned int)arg4 SessionId:(unsigned int)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

