//
//  ControlViewController.h
//  NepTunes
//
//  Created by rurza on 15/02/16.
//  Copyright © 2016 micropixels. All rights reserved.
//

@import AppKit;

@protocol ControlViewDelegate <NSObject>
@property (nonatomic) BOOL popoverIsShown;
-(void)hideControls;
-(NSWindow *)window;
@optional
-(void)updateUIbasedOnCurrentTrackRating;

@end

@interface ControlViewController : NSObject
@property (nonatomic, weak) IBOutlet NSButton *loveButton;
@property (nonatomic, weak) IBOutlet NSButton *playButton;
@property (nonatomic, weak) IBOutlet NSButton *forwardButton;
@property (nonatomic, weak) IBOutlet NSButton *backwardButton;
@property (nonatomic, weak) IBOutlet NSButton *shareButton;

@property (nonatomic, weak) IBOutlet NSButton *volumeButton;
@property (nonatomic, weak) IBOutlet NSPopover *volumePopover;

//@property (weak) IBOutlet NSView *ratingView;
//@property (weak) IBOutlet NSButton *star01Button;
//@property (weak) IBOutlet NSButton *star02Button;
//@property (weak) IBOutlet NSButton *star03Button;
//@property (weak) IBOutlet NSButton *star04Button;
//@property (weak) IBOutlet NSButton *star05Button;
//@property (nonatomic) NSArray *ratingButtons;


@property (nonatomic, weak) id<ControlViewDelegate>delegate;

- (IBAction)playOrPauseTrack:(NSButton *)sender;
- (IBAction)backTrack:(NSButton *)sender;
- (IBAction)nextTrack:(NSButton *)sender;
- (IBAction)loveTrack:(NSButton *)sender;
- (IBAction)changeVolume:(NSButton *)sender;
- (IBAction)openShareMenu:(NSButton *)sender;

//- (IBAction)rateTrack:(NSButton *)sender;

-(void)animationLoveButton;
-(void)updateVolumeIcon;
-(NSImage *)volumeIconForVolume:(NSUInteger)volume;

@end
