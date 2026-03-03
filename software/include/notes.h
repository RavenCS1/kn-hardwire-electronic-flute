#ifndef NOTES_H
#define NOTES_H 1

// Note Frequencies [Hz]
constexpr float NOTE_C4     = 261.63f
constexpr float NOTE_CS4    = 277.18f
constexpr float NOTE_D4     = 293.66f
constexpr float NOTE_DS4    = 311.13f
constexpr float NOTE_E4     = 329.63f
constexpr float NOTE_F4     = 349.23f
constexpr float NOTE_FS4    = 369.99f
constexpr float NOTE_G4     = 392.00f
constexpr float NOTE_GS4    = 415.30f
constexpr float NOTE_A4     = 440.00f
constexpr float NOTE_AS4    = 466.16f
constexpr float NOTE_B4     = 493.88f
constexpr float NOTE_C5     = 523.25f
constexpr float NOTE_D5     = 587.33f

// Lookup table for button index to note conversion
static constexpr float note_frequencies[] = {
    NOTE_C4,
    NOTE_D4,
    NOTE_E4,
    NOTE_F4,
    NOTE_G4, 
    NOTE_A4,
    NOTE_B4,
    NOTE_C5
};

#endif
