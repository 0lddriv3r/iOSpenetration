//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IFavAudioPlayerExt.h"

@class FavAudioInfo, MMUIImageView, NSString, UIButton, UIImage, UILabel;

@interface FavAudioPlayerController : MMUIView <IFavAudioPlayerExt>
{
    FavAudioInfo *m_audioInfo;
    UIButton *m_playBtn;
    UIImage *m_imgForPause;
    UIImage *m_imgForPauseHL;
    UIImage *m_imgForPlay;
    UIImage *m_imgForPlayHL;
    BOOL m_bBtnForPlay;
    UILabel *m_durationLabel;
    MMUIImageView *m_imgvBack;
    MMUIImageView *m_imgvFront;
    unsigned long m_progressLength;
    unsigned long m_uiVoiceTime;
    BOOL _isWeNoteStyle;
    UIButton *_stopBtn;
}

@property(retain, nonatomic) FavAudioInfo *m_audioInfo; // @synthesize m_audioInfo;
- (void).cxx_destruct;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned long)arg2;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)stop;
- (void)play;
- (void)onPlayBtnClick;
- (BOOL)isCurrentControllForPlayer;
- (void)updateProgress:(unsigned long)arg1 Animated:(BOOL)arg2;
- (void)updateBtnImage;
- (void)initProgressView;
- (void)initDurationLabel;
- (void)initBtn;
- (void)layoutSubviews;
- (void)layoutSubviewsWithDefault;
- (void)layoutSubviewsWithWeNoteStyle;
- (void)initWeNoteStyleView;
- (void)initView;
- (id)initWithFavAudioInfo:(id)arg1;
- (id)initWeNotePlayViewWithFavAudioInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

