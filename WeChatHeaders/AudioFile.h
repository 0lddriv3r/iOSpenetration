//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioDataRead.h"

@class NSFileHandle, NSString;

@interface AudioFile : NSObject <AudioDataRead>
{
    NSFileHandle *m_fhFile;
    unsigned long m_uiDataWrited;
}

- (void).cxx_destruct;
- (BOOL)writeBytes:(unsigned long)arg1 len:(unsigned long)arg2 buffer:(void *)arg3;
- (BOOL)readBytes:(unsigned long)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned long)getLength;
- (unsigned long)seekToEnd;
- (void)close;
- (BOOL)read:(id)arg1;
- (BOOL)open:(id)arg1;
- (BOOL)create:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

