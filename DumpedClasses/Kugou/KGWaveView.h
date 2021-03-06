//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIColor;

@interface KGWaveView : UIView
{
    unsigned long long _numberOfWaves;
    UIColor *_waveColor;
    double _primaryWaveLineWidth;
    double _secondaryWaveLineWidth;
    double _idleAmplitude;
    double _frequency;
    double _amplitude;
    double _density;
    double _phaseShift;
    NSArray *_waveObjects;
    double _phase;
}

@property(nonatomic) double phase; // @synthesize phase=_phase;
@property(retain, nonatomic) NSArray *waveObjects; // @synthesize waveObjects=_waveObjects;
@property(nonatomic) double phaseShift; // @synthesize phaseShift=_phaseShift;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) double idleAmplitude; // @synthesize idleAmplitude=_idleAmplitude;
@property(nonatomic) double secondaryWaveLineWidth; // @synthesize secondaryWaveLineWidth=_secondaryWaveLineWidth;
@property(nonatomic) double primaryWaveLineWidth; // @synthesize primaryWaveLineWidth=_primaryWaveLineWidth;
@property(retain, nonatomic) UIColor *waveColor; // @synthesize waveColor=_waveColor;
@property(nonatomic) unsigned long long numberOfWaves; // @synthesize numberOfWaves=_numberOfWaves;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateWithLevel:(double)arg1;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

