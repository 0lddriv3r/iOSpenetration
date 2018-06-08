//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_io>, NSObject<OS_dispatch_source>, PTProtocol;

@interface PTChannel : NSObject
{
    NSObject<OS_dispatch_io> *dispatchObj_channel_;
    NSObject<OS_dispatch_source> *dispatchObj_source_;
    NSError *endError_;
    id <PTChannelDelegate> delegate_;
    unsigned char delegateFlags_;
    unsigned char connState_;
    PTProtocol *protocol_;
}

+ (id)channelWithDelegate:(id)arg1;
@property(retain) PTProtocol *protocol; // @synthesize protocol=protocol_;
- (void).cxx_destruct;
- (id)description;
- (void)sendFrameOfType:(unsigned int)arg1 tag:(unsigned int)arg2 withPayload:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (BOOL)startReadingFromConnectedChannel:(id)arg1 error:(id *)arg2;
- (void)cancel;
- (void)close;
- (BOOL)acceptIncomingConnection:(int)arg1;
- (void)listenOnPort:(unsigned short)arg1 IPv4Address:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)connectToPort:(unsigned short)arg1 IPv4Address:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)connectToPort:(int)arg1 overUSBHub:(id)arg2 deviceID:(id)arg3 callback:(CDUnknownBlockType)arg4;
@property(retain) id <PTChannelDelegate> delegate;
- (void)setDispatchSource:(id)arg1;
- (void)setDispatchChannel:(id)arg1;
- (void)setConnState:(BOOL)arg1;
@property(retain) id userInfo;
@property(readonly) BOOL isListening;
@property(readonly) BOOL isConnected;
- (void)dealloc;
- (id)init;
- (id)initWithProtocol:(id)arg1;
- (id)initWithProtocol:(id)arg1 delegate:(id)arg2;

@end
