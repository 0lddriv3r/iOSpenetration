//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSRecursiveLock;

@interface MMAudioDataPipe : NSObject
{
    NSRecursiveLock *m_lock;
    id <MMAudioDataReadStreamDelegate> m_readDelegate;
    id <MMAudioDataWriteStreamDelegate> m_writeDelegate;
    struct __CFReadStream *m_readStream;
    struct __CFWriteStream *m_writeStream;
    NSDictionary *m_streamProperties;
    NSMutableArray *m_dataQueue;
    int m_readOffset;
    int m_writeOffset;
}

@property(retain, nonatomic) NSMutableArray *m_dataQueue; // @synthesize m_dataQueue;
@property(retain, nonatomic) NSDictionary *m_streamProperties; // @synthesize m_streamProperties;
- (void).cxx_destruct;
- (void)resetStream;
- (BOOL)seekToPosition:(int)arg1 andSeekTime:(double)arg2;
- (int)read:(void *)arg1 size:(int)arg2;
- (void)dataErrorWithCode:(int)arg1;
- (BOOL)hasBytesAvailable;
- (void)closeStream;
- (BOOL)openReadStream;
- (id)copyStreamProperties;
- (void)handleReadFromCFStream:(struct __CFReadStream *)arg1 eventType:(unsigned long)arg2;
- (void)handleWriteFromCFStream:(struct __CFWriteStream *)arg1 eventType:(unsigned long)arg2;
- (int)getWriteOffset;
- (int)getReadOffset;
- (void)appendEOF;
- (void)stopWithError;
- (void)pumpQueueDataToWriteStream;
- (void)appendBuffer:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setWriteDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
