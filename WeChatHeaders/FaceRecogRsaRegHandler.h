//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogReadNumHandler.h"

#import "FaceRecogBaseHandlerDelegate.h"
#import "IRsaCertMgrExt.h"

@class NSString;

@interface FaceRecogRsaRegHandler : FaceRecogReadNumHandler <IRsaCertMgrExt, FaceRecogBaseHandlerDelegate>
{
    int _idcRedirectCount;
}

@property(nonatomic) int idcRedirectCount; // @synthesize idcRedirectCount=_idcRedirectCount;
- (void)onRsaRegisterFaceAgain:(id)arg1;
- (int)genErrCodeByResponse:(id)arg1;
- (void)handleRsaRegisterFace:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)didUploadFaceData:(id)arg1;
- (void)startRegisterFace:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

