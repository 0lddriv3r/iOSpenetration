//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QBPostDataProtocol.h"

@class NSData, NSString;

@interface QBPostDataString : NSObject <QBPostDataProtocol>
{
    int _dataPostType;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    BOOL _dataReady;
    int _randomString;
    unsigned int _streamRead;
    NSData *_streamData;
    NSString *_dataString;
    NSString *_name;
    NSString *_encodeType;
}

@property(readonly) NSString *encodeType; // @synthesize encodeType=_encodeType;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *dataString; // @synthesize dataString=_dataString;
@property int randomString; // @synthesize randomString=_randomString;
@property BOOL dataReady; // @synthesize dataReady=_dataReady;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (id)createInputStreamForPost;
- (unsigned int)dataSize;
- (BOOL)shouldUseStreamToSendData;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)finalPostData;
- (id)contentInfoString;
- (id)contentBoundaryString;
- (id)contentData;
@property(nonatomic) int dataPostType;
- (void)setDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;
- (id)initWithDataString:(id)arg1 name:(id)arg2 encodeType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSString *filePath;
@property(readonly) unsigned int fileSize;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

