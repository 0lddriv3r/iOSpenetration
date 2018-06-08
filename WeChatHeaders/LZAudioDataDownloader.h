//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LZAudioDataDownloader : NSObject
{
    id <LZAudioDataDownloadDelegate> _delegate;
}

@property(nonatomic) __weak id <LZAudioDataDownloadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)downloadDetailInfo;
- (BOOL)isErrorCanRetry:(id)arg1;
- (double)downloadCostTime;
- (double)downloadSpeed;
- (long long)continuousLengh;
- (struct _NSRange)downloadRange;
- (id)taskItem;
- (BOOL)beginDownload:(id)arg1;
- (void)cancel;

@end
