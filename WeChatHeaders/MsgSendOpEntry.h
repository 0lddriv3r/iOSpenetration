//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MsgSendOpEntry : NSObject
{
    BOOL _voice_input;
    BOOL _voice;
    BOOL _emoji;
    BOOL _image;
    BOOL _video;
    BOOL _location;
    BOOL _share_card;
    BOOL _file;
    BOOL _favorite;
    BOOL _voice_voip;
    BOOL _video_voip;
    BOOL _multi_voip;
    BOOL _hong_bao;
    BOOL _transfer_money;
    BOOL _ka_quan;
    BOOL _we_app;
    BOOL _enterprise_brand;
    BOOL _recommend_app;
    NSString *_bottomTip;
}

@property(nonatomic) BOOL recommend_app; // @synthesize recommend_app=_recommend_app;
@property(nonatomic) BOOL enterprise_brand; // @synthesize enterprise_brand=_enterprise_brand;
@property(nonatomic) BOOL we_app; // @synthesize we_app=_we_app;
@property(nonatomic) BOOL ka_quan; // @synthesize ka_quan=_ka_quan;
@property(nonatomic) BOOL transfer_money; // @synthesize transfer_money=_transfer_money;
@property(nonatomic) BOOL hong_bao; // @synthesize hong_bao=_hong_bao;
@property(nonatomic) BOOL multi_voip; // @synthesize multi_voip=_multi_voip;
@property(nonatomic) BOOL video_voip; // @synthesize video_voip=_video_voip;
@property(nonatomic) BOOL voice_voip; // @synthesize voice_voip=_voice_voip;
@property(nonatomic) BOOL favorite; // @synthesize favorite=_favorite;
@property(nonatomic) BOOL file; // @synthesize file=_file;
@property(nonatomic) BOOL share_card; // @synthesize share_card=_share_card;
@property(nonatomic) BOOL location; // @synthesize location=_location;
@property(nonatomic) BOOL video; // @synthesize video=_video;
@property(nonatomic) BOOL image; // @synthesize image=_image;
@property(nonatomic) BOOL emoji; // @synthesize emoji=_emoji;
@property(nonatomic) BOOL voice; // @synthesize voice=_voice;
@property(nonatomic) BOOL voice_input; // @synthesize voice_input=_voice_input;
@property(retain, nonatomic) NSString *bottomTip; // @synthesize bottomTip=_bottomTip;
- (void).cxx_destruct;

@end

