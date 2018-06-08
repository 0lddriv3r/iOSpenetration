//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class MMTimer, NSMutableArray;

@interface UploadSearchVoiceMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned long _searchType;
    unsigned long _curVoiceId;
    BOOL _isUploading;
    BOOL _isEnd;
    NSMutableArray *_uploadQueue;
    id <UploadSearchVoiceMgrDelegate> delegate;
    MMTimer *checkUploadQueueTimer;
}

@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
@property(nonatomic) __weak id <UploadSearchVoiceMgrDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)AddNewPart:(unsigned long)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4;
- (void)MainUpdateQueue:(id)arg1;
- (void)Stop;
- (void)Start:(unsigned long)arg1 SearchType:(unsigned long)arg2;
- (void)dealloc;
- (id)init;
- (void)doUpload:(unsigned long)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)stopUploadTask;
- (void)clearTempFile;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;

@end
