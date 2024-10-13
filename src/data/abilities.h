const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("STENCH"),
        .description = COMPOUND_STRING("May cause a foe to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("DRIZZLE"),
        .description = COMPOUND_STRING("Summons rain in battle."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("SPEED BOOST"),
        .description = COMPOUND_STRING("Gradually boosts SPEED."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("BATTLE ARMOUR"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("STURDY"),
        .description = COMPOUND_STRING("Negates 1-hit KO attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("DAMP"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("LIMBER"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("SAND VEIL"),
        .description = COMPOUND_STRING("Ups evasion in a sandstorm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("STATIC"),
        .description = COMPOUND_STRING("Paralyses on contact."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("VOLT ABSORB"),
        .description = COMPOUND_STRING("Turns electricity into HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("WATER ABSORB"),
        .description = COMPOUND_STRING("Changes water into HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("OBLIVIOUS"),
        .description = COMPOUND_STRING("Prevents attraction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("CLOUD NINE"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("COMPOUND EYES"),
    #else
        .name = _("CompoundEyes"),
    #endif
        .description = COMPOUND_STRING("Raises accuracy."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("INSOMNIA"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("COLOUR CHANGE"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("IMMUNITY"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("FLASH FIRE"),
        .description = COMPOUND_STRING("Powers up if hit by fire."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("SHIELD DUST"),
        .description = COMPOUND_STRING("Prevents added effects."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("OWN TEMPO"),
        .description = COMPOUND_STRING("Prevents confusion."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("SUCTION CUPS"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("INTIMIDATE"),
        .description = COMPOUND_STRING("Lowers the foe's ATTACK."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("SHADOW TAG"),
        .description = COMPOUND_STRING("Prevents the foe's escape."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("ROUGH SKIN"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("WONDER GUARD"),
        .description = COMPOUND_STRING("“Supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("LEVITATE"),
        .description = COMPOUND_STRING("Not hit by GROUND attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("EFFECT SPORE"),
        .description = COMPOUND_STRING("Leaves spores on contact."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("SYNCHRONISE"),
        .description = COMPOUND_STRING("Passes on status problems."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("CLEAR BODY"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("NATURAL CURE"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("LIGHTNING ROD"),
    #else
        .name = _("LightningRod"),
    #endif
        .description = COMPOUND_STRING("Draws electrical moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("SERENE GRACE"),
        .description = COMPOUND_STRING("Promotes added effects."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("SWIFT SWIM"),
        .description = COMPOUND_STRING("Raises SPEED in rain."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("CHLOROPHYLL"),
        .description = COMPOUND_STRING("Raises SPEED in sunshine."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("ILLUMINATE"),
        .description = COMPOUND_STRING("Encounter rate increases."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("TRACE"),
        .description = COMPOUND_STRING("Copies special ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("HUGE POWER"),
        .description = COMPOUND_STRING("Raises ATTACK."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("POISON POINT"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("INNER FOCUS"),
        .description = COMPOUND_STRING("Prevents flinching."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("MAGMA ARMOUR"),
        .description = COMPOUND_STRING("Prevents freezing."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("WATER VEIL"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("MAGNET PULL"),
        .description = COMPOUND_STRING("Traps STEEL-type POKéMON."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("SOUNDPROOF"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("RAIN DISH"),
        .description = COMPOUND_STRING("Slight HP recovery in rain."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("SAND STREAM"),
        .description = COMPOUND_STRING("Summons a sandstorm."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("PRESSURE"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("THICK FAT"),
        .description = COMPOUND_STRING("Heat-and-cold protection."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("EARLY BIRD"),
        .description = COMPOUND_STRING("Awakens quickly from sleep."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("FLAME BODY"),
        .description = COMPOUND_STRING("Burns the foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("RUN AWAY"),
        .description = COMPOUND_STRING("Makes escaping easier."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("KEEN EYE"),
        .description = COMPOUND_STRING("Prevents loss of accuracy."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("HYPER CUTTER"),
        .description = COMPOUND_STRING("Prevents ATTACK reduction."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("PICKUP"),
        .description = COMPOUND_STRING("May pick up items."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("TRUANT"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("HUSTLE"),
        .description = COMPOUND_STRING("Trades accuracy for power."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("CUTE CHARM"),
        .description = COMPOUND_STRING("Infatuates on contact."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("PLUS"),
        .description = COMPOUND_STRING("Powers up with MINUS."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("MINUS"),
        .description = COMPOUND_STRING("Powers up with PLUS."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("FORECAST"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("STICKY HOLD"),
        .description = COMPOUND_STRING("Prevents item theft."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("SHED SKIN"),
        .description = COMPOUND_STRING("Heals the body by shedding."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("GUTS"),
        .description = COMPOUND_STRING("Ups ATTACK if suffering."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("MARVEL SCALE"),
        .description = COMPOUND_STRING("Ups DEFENCE if suffering."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("LIQUID OOZE"),
        .description = COMPOUND_STRING("Draining causes injury."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("OVERGROW"),
        .description = COMPOUND_STRING("Ups GRASS moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("BLAZE"),
        .description = COMPOUND_STRING("Ups FIRE moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("TORRENT"),
        .description = COMPOUND_STRING("Ups WATER moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("SWARM"),
        .description = COMPOUND_STRING("Ups BUG moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("ROCK HEAD"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("DROUGHT"),
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("ARENA TRAP"),
        .description = COMPOUND_STRING("Prevents fleeing."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("VITAL SPIRIT"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("WHITE SMOKE"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("PURE POWER"),
        .description = COMPOUND_STRING("Raises ATTACK."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("SHELL ARMOUR"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("AIR LOCK"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("TANGLED FEET"),
        .description = COMPOUND_STRING("Ups evasion if confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("MOTOR DRIVE"),
        .description = COMPOUND_STRING("Electricity raises SPEED."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("RIVALRY"),
        .description = COMPOUND_STRING("Powers up against rivals."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("STEADFAST"),
        .description = COMPOUND_STRING("Flinching raises SPEED."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("SNOW CLOAK"),
        .description = COMPOUND_STRING("Ups evasion in Hail or Snow."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("GLUTTONY"),
        .description = COMPOUND_STRING("Eats BERRIES early."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("ANGER POINT"),
        .description = COMPOUND_STRING("Critical hits raise ATTACK."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("UNBURDEN"),
        .description = COMPOUND_STRING("Using a hold item ups SPEED."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("HEATPROOF"),
        .description = COMPOUND_STRING("Heat and burn protection."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("SIMPLE"),
        .description = COMPOUND_STRING("Prone to wild stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("DRY SKIN"),
        .description = COMPOUND_STRING("Prefers moisture to heat."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("DOWNLOAD"),
        .description = COMPOUND_STRING("Adjusts power favourably."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("IRON FIST"),
        .description = COMPOUND_STRING("Boosts punching moves."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("POISON HEAL"),
        .description = COMPOUND_STRING("Restores HP if poisoned."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("ADAPTABILITY"),
        .description = COMPOUND_STRING("Boosts same type attacks."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("SKILL LINK"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("HYDRATION"),
        .description = COMPOUND_STRING("Cures status in rain."),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("SOLAR POWER"),
        .description = COMPOUND_STRING("Powers up in sunshine."),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("QUICK FEET"),
        .description = COMPOUND_STRING("Ups SPEED if suffering."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("NORMALISE"),
        .description = COMPOUND_STRING("Moves become NORMAL-type."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("SNIPER"),
        .description = COMPOUND_STRING("Boosts critical hits."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("MAGIC GUARD"),
        .description = COMPOUND_STRING("Only damaged by attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("NO GUARD"),
        .description = COMPOUND_STRING("Ensures that all moves hit."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("STALL"),
        .description = COMPOUND_STRING("Always moves last."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("TECHNICIAN"),
        .description = COMPOUND_STRING("Boosts weaker moves."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("LEAF GUARD"),
        .description = COMPOUND_STRING("Blocks status in sunshine."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("KLUTZ"),
        .description = COMPOUND_STRING("Can't use held items."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("MOULD BREAKER"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("SUPER LUCK"),
        .description = COMPOUND_STRING("Critical hits land often."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("AFTERMATH"),
        .description = COMPOUND_STRING("Fainting damages the foe."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("ANTICIPATION"),
        .description = COMPOUND_STRING("Senses dangerous moves."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("FOREWARN"),
        .description = COMPOUND_STRING("Determines a foe's move."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("UNAWARE"),
        .description = COMPOUND_STRING("Ignores stat changes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("TINTED LENS"),
        .description = COMPOUND_STRING("Ups “not very effective”."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("FILTER"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("SLOW START"),
        .description = COMPOUND_STRING("Takes a while to get going."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("SCRAPPY"),
        .description = COMPOUND_STRING("Hits GHOST-type POKéMON."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("STORM DRAIN"),
        .description = COMPOUND_STRING("Draws in WATER moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("ICE BODY"),
        .description = COMPOUND_STRING("HP recovery in Hail or Snow."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("SOLID ROCK"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("SNOW WARNING"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Summons snow in battle."),
    #else
        .description = COMPOUND_STRING("Summons hail in battle."),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("HONEY GATHER"),
        .description = COMPOUND_STRING("May gather HONEY."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("FRISK"),
        .description = COMPOUND_STRING("Checks a foe's item."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("RECKLESS"),
        .description = COMPOUND_STRING("Boosts moves with recoil."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("MULTITYPE"),
        .description = COMPOUND_STRING("Changes type to its PLATE."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("FLOWER GIFT"),
        .description = COMPOUND_STRING("Allies power up in sunshine."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("BAD DREAMS"),
        .description = COMPOUND_STRING("Damages sleeping POKéMON."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("PICKPOCKET"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("SHEER FORCE"),
        .description = COMPOUND_STRING("Trades effects for power."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("CONTRARY"),
        .description = COMPOUND_STRING("Inverts stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("UNNERVE"),
        .description = COMPOUND_STRING("Foes can't eat BERRIES."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("DEFIANT"),
        .description = COMPOUND_STRING("Lowered stats up ATTACK."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("DEFEATIST"),
        .description = COMPOUND_STRING("Gives up at half HP."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("CURSED BODY"),
        .description = COMPOUND_STRING("Disables moves on contact."),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("HEAL"),
        .description = COMPOUND_STRING("Heals partner POKéMON."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("FRIEND GUARD"),
        .description = COMPOUND_STRING("Lowers damage to partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("WEAK ARMOUR"),
        .description = COMPOUND_STRING("Its stats change when hit."),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("HEAVY METAL"),
        .description = COMPOUND_STRING("Doubles weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("LIGHT METAL"),
        .description = COMPOUND_STRING("Halves weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("MULTISCALE"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("TOXIC BOOST"),
        .description = COMPOUND_STRING("Ups ATTACK if poisoned."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("FLARE BOOST"),
        .description = COMPOUND_STRING("Ups SP. ATK if burned."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("HARVEST"),
        .description = COMPOUND_STRING("May recycle a used BERRY."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("TELEPATHY"),
        .description = COMPOUND_STRING("Can't be damaged by an ally."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("MOODY"),
        .description = COMPOUND_STRING("Stats change gradually."),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("OVERCOAT"),
        .description = COMPOUND_STRING("Blocks weather and powder."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("POISON TOUCH"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("REGENERATOR"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("BIG PECKS"),
        .description = COMPOUND_STRING("Prevents DEFENCE loss."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("SAND RUSH"),
        .description = COMPOUND_STRING("Ups SPEED in a sandstorm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("WONDER SKIN"),
        .description = COMPOUND_STRING("May avoid status problems."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("ANALYTIC"),
        .description = COMPOUND_STRING("Moving last boosts power."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("ILLUSION"),
        .description = COMPOUND_STRING("Appears as a partner."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("IMPOSTER"),
        .description = COMPOUND_STRING("Transforms into the foe."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("INFILTRATOR"),
        .description = COMPOUND_STRING("Passes through barriers."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("MUMMY"),
        .description = COMPOUND_STRING("Spreads with contact."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("MOXIE"),
        .description = COMPOUND_STRING("KOs raise ATTACK."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("JUSTIFIED"),
        .description = COMPOUND_STRING("DARK hits raise ATTACK."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("RATTLED"),
        .description = COMPOUND_STRING("Raises SPEED when scared."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("MAGIC BOUNCE"),
        .description = COMPOUND_STRING("Reflects status moves."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("SAP SIPPER"),
        .description = COMPOUND_STRING("Grass increases ATTACK."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("PRANKSTER"),
        .description = COMPOUND_STRING("Status moves go first."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("SAND FORCE"),
        .description = COMPOUND_STRING("Powers up in a sandstorm."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("IRON BARBS"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("ZEN MODE"),
        .description = COMPOUND_STRING("Transforms at half HP."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("VICTORY STAR"),
        .description = COMPOUND_STRING("Raises party accuracy."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("TURBOBLAZE"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("TERAVOLT"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("AROMA VEIL"),
        .description = COMPOUND_STRING("Prevents limiting of moves."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("FLOWER VEIL"),
        .description = COMPOUND_STRING("Protects GRASS-types."),
        .aiRating = 0,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("CHEEK POUCH"),
        .description = COMPOUND_STRING("Eating BERRIES heals user."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("PROTEAN"),
        .description = COMPOUND_STRING("Changes type to used move."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("FUR COAT"),
        .description = COMPOUND_STRING("Raises DEFENCE."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("MAGICIAN"),
        .description = COMPOUND_STRING("Steals the foe's held item."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("BULLETPROOF"),
        .description = COMPOUND_STRING("Avoids some projectiles."),
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("COMPETITIVE"),
        .description = COMPOUND_STRING("Lowered stats up SP ATK."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("STRONG JAW"),
        .description = COMPOUND_STRING("Boosts biting moves."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("REFRIGERATE"),
        .description = COMPOUND_STRING("NORMAL moves become ICE."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("Prevents party from sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("STANCE CHANGE"),
    #else
        .name = _("StanceChange"),
    #endif
        .description = COMPOUND_STRING("Transforms as it battles."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("GALE WINGS"),
        .description = COMPOUND_STRING("FLYING moves go first."),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("MEGA LAUNCHER"),
    #else
        .name = _("MegaLauncher"),
    #endif
        .description = COMPOUND_STRING("Boosts pulse moves."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("GRASS PELT"),
        .description = COMPOUND_STRING("Ups DEFENCE in grass."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("SYMBIOSIS"),
        .description = COMPOUND_STRING("Passes its item to an ally."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("TOUGH CLAWS"),
        .description = COMPOUND_STRING("Boosts contact moves."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("PIXILATE"),
        .description = COMPOUND_STRING("NORMAL moves turn FAIRY."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("GOOEY"),
        .description = COMPOUND_STRING("Lowers SPEED on contact."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("AERILATE"),
        .description = COMPOUND_STRING("NORMAL moves turn FLYING."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PARENTAL BOND"),
    #else
        .name = _("ParentalBond"),
    #endif
        .description = COMPOUND_STRING("Moves hit twice."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("DARK AURA"),
        .description = COMPOUND_STRING("Boosts DARK moves."),
        .aiRating = 6,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("FAIRY AURA"),
        .description = COMPOUND_STRING("Boosts FAIRY moves."),
        .aiRating = 6,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("AURA BREAK"),
        .description = COMPOUND_STRING("Reverse aura abilities."),
        .aiRating = 3,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PRIMORDIAL SEA"),
    #else
        .name = _("PrimrdialSea"),
    #endif
        .description = COMPOUND_STRING("Summons heavy rain."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("DESOLATE LAND"),
    #else
        .name = _("DesolateLand"),
    #endif
        .description = COMPOUND_STRING("Summons intense sunlight."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("DELTA STREAM"),
        .description = COMPOUND_STRING("Summons strong winds."),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("STAMINA"),
        .description = COMPOUND_STRING("Boosts DEFENCE when hit."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("WIMP OUT"),
        .description = COMPOUND_STRING("Flees at half HP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("EMERGENCY EXIT"),
    #else
        .name = _("EmergncyExit"),
    #endif
        .description = COMPOUND_STRING("Flees at half HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("WATER COMPACTION"),
    #else
        .name = _("WtrCmpaction"),
    #endif
        .description = COMPOUND_STRING("WATER boosts DEFENCE."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("MERCILESS"),
        .description = COMPOUND_STRING("Criticals poisoned foes."),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("SHIELDS DOWN"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("STAKEOUT"),
        .description = COMPOUND_STRING("Stronger as foes switch in."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("WATER BUBBLE"),
        .description = COMPOUND_STRING("Guards from fire and burns."),
        .aiRating = 8,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("STEELWORKER"),
        .description = COMPOUND_STRING("Powers up STEEL moves."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("BERSERK"),
        .description = COMPOUND_STRING("Boosts SP. ATK at low HP."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("SLUSH RUSH"),
        .description = COMPOUND_STRING("Raises SPEED in Hail/Snow."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("LONG REACH"),
        .description = COMPOUND_STRING("Never makes contact."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("LIQUID VOICE"),
        .description = COMPOUND_STRING("Makes sound moves WATER."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("TRIAGE"),
        .description = COMPOUND_STRING("Healing moves go first."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("GALVANISE"),
        .description = COMPOUND_STRING("NORMAL moves electrify."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("SURGE SURFER"),
        .description = COMPOUND_STRING("Faster on electricity."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("SCHOOLING"),
        .description = COMPOUND_STRING("Forms a school when strong."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("DISGUISE"),
        .description = COMPOUND_STRING("Decoy protects it once."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("BATTLE BOND"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("POWER CONSTRUCT"),
    #else
        .name = _("PwrConstruct"),
    #endif
        .description = COMPOUND_STRING("Cells aid it when weakened."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("CORROSION"),
        .description = COMPOUND_STRING("Poisons any type."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("COMATOSE"),
        .description = COMPOUND_STRING("Always drowsing."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("QUEENLY MAJESTY"),
    #else
        .name = _("QueenlyMjsty"),
    #endif
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("INNARDS OUT"),
        .description = COMPOUND_STRING("Hurts foe when defeated."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("DANCER"),
        .description = COMPOUND_STRING("Dances along with others."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("BATTERY"),
        .description = COMPOUND_STRING("Boosts ally's SP. ATK."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("FLUFFY"),
        .description = COMPOUND_STRING("Tougher but flammable."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("DAZZLING"),
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("SOUL-HEART"),
        .description = COMPOUND_STRING("KOs raise SP. ATK."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("TANGLING HAIR"),
    #else
        .name = _("TanglingHair"),
    #endif
        .description = COMPOUND_STRING("Lowers SPEED on contact."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("RECEIVER"),
        .description = COMPOUND_STRING("Copies ally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("POWER OF ALCHEMY"),
    #else
        .name = _("PwrOfAlchemy"),
    #endif
        .description = COMPOUND_STRING("Copies ally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("BEAST BOOST"),
        .description = COMPOUND_STRING("KOs boost best stat."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS SYSTEM"),
        .description = COMPOUND_STRING("MEMORIES change its type."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("ELECTRIC SURGE"),
    #else
        .name = _("ElectrcSurge"),
    #endif
        .description = COMPOUND_STRING("Field becomes Electric."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PSYCHIC SURGE"),
    #else
        .name = _("PsychicSurge"),
    #endif
        .description = COMPOUND_STRING("Field becomes weird."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("MISTY SURGE"),
        .description = COMPOUND_STRING("Field becomes misty."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("GRASSY SURGE"),
        .description = COMPOUND_STRING("Field becomes grassy."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("FULL METAL BODY"),
    #else
        .name = _("FullMetalBdy"),
    #endif
        .description = COMPOUND_STRING("Prevents stat reduction."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("SHADOW SHIELD"),
    #else
        .name = _("ShadowShield"),
    #endif
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("PRISM ARMOUR"),
        .description = COMPOUND_STRING("Weakens “supereffective”."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("NEUROFORCE"),
        .description = COMPOUND_STRING("Ups “supereffective”."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("INTREPID SWORD"),
    #else
        .name = _("IntrepidSwrd"),
    #endif
        .description = COMPOUND_STRING("Ups ATTACK on entry."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("DAUNTLESS SHIELD"),
    #else
        .name = _("DauntlssShld"),
    #endif
        .description = COMPOUND_STRING("Ups DEFENCE on entry."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("LIBERO"),
        .description = COMPOUND_STRING("Changes type to moves."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("BALL FETCH"),
        .description = COMPOUND_STRING("Fetches failed POKé BALL."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("COTTON DOWN"),
        .description = COMPOUND_STRING("Lower SPEED of all when hit."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PROPELLER TAIL"),
    #else
        .name = _("PropellrTail"),
    #endif
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("MIRROR ARMOUR"),
        .description = COMPOUND_STRING("Reflect stat decreases."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("GULP MISSILE"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .aiRating = 3,
        .cantBeCopied = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("STALWART"),
        .description = COMPOUND_STRING("Ignores foe's redirection."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("STEAM ENGINE"),
        .description = COMPOUND_STRING("FIRE or WATER ups SPEED."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("PUNK ROCK"),
        .description = COMPOUND_STRING("Ups and resists sound."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("SAND SPIT"),
        .description = COMPOUND_STRING("Creates a sandstorm if hit."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("ICE SCALES"),
        .description = COMPOUND_STRING("Halves special damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("RIPEN"),
        .description = COMPOUND_STRING("Doubles effect of BERRIES."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("ICE FACE"),
        .description = COMPOUND_STRING("Hail or Snow renew free hit."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("POWER SPOT"),
        .description = COMPOUND_STRING("Powers up ally moves."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("MIMICRY"),
        .description = COMPOUND_STRING("Changes type on terrain."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("SCREEN CLEANER"),
    #else
        .name = _("ScreenCleanr"),
    #endif
        .description = COMPOUND_STRING("Removes walls of light."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("STEELY SPIRIT"),
    #else
        .name = _("SteelySpirit"),
    #endif
        .description = COMPOUND_STRING("Boosts ally's STEEL moves."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("PERISH BODY"),
        .description = COMPOUND_STRING("Foe faints in 3 turns if hit."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("WANDERING SPIRIT"),
    #else
        .name = _("WandrngSprit"),
    #endif
        .description = COMPOUND_STRING("Trade abilities on contact."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("GORILLA TACTICS"),
    #else
        .name = _("GorillaTacti"),
    #endif
        .description = COMPOUND_STRING("Ups ATTACK and locks move."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("NEUTRALISING GAS"),
    #else
        .name = _("NeutrlzngGas"),
    #endif
        .description = COMPOUND_STRING("All Abilities are nullified."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("PASTEL VEIL"),
        .description = COMPOUND_STRING("Protects team from poison."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("HUNGER SWITCH"),
    #else
        .name = _("HungerSwitch"),
    #endif
        .description = COMPOUND_STRING("Changes form each turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("QUICK DRAW"),
        .description = COMPOUND_STRING("Moves first occasionally."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("UNSEEN FIST"),
        .description = COMPOUND_STRING("Contact evades protection."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("CURIOUS MEDICINE"),
    #else
        .name = _("CuriusMedicn"),
    #endif
        .description = COMPOUND_STRING("Remove ally's stat changes."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("TRANSISTOR"),
        .description = COMPOUND_STRING("Ups ELECTRIC-type moves."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("DRAGON'S MAW"),
        .description = COMPOUND_STRING("Ups DRAGON-type moves."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("CHILLING NEIGH"),
    #else
        .name = _("ChillngNeigh"),
    #endif
        .description = COMPOUND_STRING("KOs boost ATTACK stat."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("GRIM NEIGH"),
        .description = COMPOUND_STRING("KOs boost SP. ATK stat."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("AS ONE"),
        .description = COMPOUND_STRING("UNNERVE and CHILL'N NEIGH."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("AS ONE"),
        .description = COMPOUND_STRING("UNNERVE and GRIM NEIGH."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("LINGERING AROMA"),
    #else
        .name = _("LngerngAroma"),
    #endif
        .description = COMPOUND_STRING("Spreads with contact."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("SEED SOWER"),
        .description = COMPOUND_STRING("Affects terrain when hit."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("THERMAL EXCHANGE"),
    #else
        .name = _("ThrmlExchnge"),
    #endif
        .description = COMPOUND_STRING("FIRE hits up ATTACK."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("ANGER SHELL"),
        .description = COMPOUND_STRING("Gets angry at half HP."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PURIFYING SALT"),
    #else
        .name = _("PurfyingSalt"),
    #endif
        .description = COMPOUND_STRING("Protected by pure salts."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("WELL-BAKED BODY"),
    #else
        .name = _("WellBakedBdy"),
    #endif
        .description = COMPOUND_STRING("Strengthened by Fire."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("WIND RIDER"),
        .description = COMPOUND_STRING("Ups ATTACK if hit by wind."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("GUARD DOG"),
        .description = COMPOUND_STRING("Cannot be intimidated."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("ROCKY PAYLOAD"),
    #else
        .name = _("RockyPayload"),
    #endif
        .description = COMPOUND_STRING("Powers up ROCK moves."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("WIND POWER"),
        .description = COMPOUND_STRING("Gets charged by wind."),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("ZERO TO HERO"),
        .description = COMPOUND_STRING("Changes form on switch out."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("COMMANDER"),
        .description = COMPOUND_STRING("Commands from DONDOZO."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("ELECTROMORPHOSIS"),
    #else
        .name = _("Elecmrphosis"),
    #endif
        .description = COMPOUND_STRING("Gets Charged when hit."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("PROTOSYNTHESIS"),
    #else
        .name = _("Protosnthsis"),
    #endif
        .description = COMPOUND_STRING("Sun boosts best stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("QUARK DRIVE"),
        .description = COMPOUND_STRING("Elec. field ups best stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("GOOD AS GOLD"),
        .description = COMPOUND_STRING("Avoids status problems."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("VESSEL OF RUIN"),
    #else
        .name = _("VesselOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' sp. damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("SWORD OF RUIN"),
    #else
        .name = _("SwordOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' DEFENCE."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("TABLETS OF RUIN"),
    #else
        .name = _("TabltsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("BEADS OF RUIN"),
    #else
        .name = _("BeadsOfRuin"),
    #endif
        .description = COMPOUND_STRING("Lowers foes' SP. DEF."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("ORICHALCUM PULSE"),
    #else
        .name = _("OrchlcumPlse"),
    #endif
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .aiRating = 8,
    },

    [ABILITY_HADRON_ENGINE] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("HADRON ENGINE"),
    #else
        .name = _("HadronEngine"),
    #endif
        .description = COMPOUND_STRING("Field becomes Electric."),
        .aiRating = 8,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("OPPORTUNIST"),
        .description = COMPOUND_STRING("Copies foe's stat change."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("CUD CHEW"),
        .description = COMPOUND_STRING("Eats a used BERRY again."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("SHARPNESS"),
        .description = COMPOUND_STRING("Strengthens slicing moves."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("SUPREME OVERLORD"),
    #else
        .name = _("SuprmeOvrlrd"),
    #endif
        .description = COMPOUND_STRING("Inherits fallen's strength."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("COSTAR"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("TOXIC DEBRIS"),
        .description = COMPOUND_STRING("Throws poison spikes if hit."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("ARMOUR TAIL"),
        .description = COMPOUND_STRING("Protects from priority."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("EARTH EATER"),
        .description = COMPOUND_STRING("Eats ground to heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("MYCELIUM MIGHT"),
    #else
        .name = _("MceliumMight"),
    #endif
        .description = COMPOUND_STRING("Status moves never fail."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("HOSPITALITY"),
        .description = COMPOUND_STRING("Restores ally's HP."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("MIND'S EYE"),
        .description = COMPOUND_STRING("KEEN EYE and SCRAPPY."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("EMBODY ASPECT"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises SPEED."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("EMBODY ASPECT"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises ATTACK."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("EMBODY ASPECT"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises SP. DEF."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("EMBODY ASPECT"),
    #else
        .name = _("EmbodyAspect"),
    #endif
        .description = COMPOUND_STRING("Raises DEFENCE."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("TOXIC CHAIN"),
        .description = COMPOUND_STRING("Moves can poison."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("SUPERSWEET SYRUP"),
    #else
        .name = _("SuprswtSyrup"),
    #endif
        .description = COMPOUND_STRING("Lowers the foe's Evasion."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("TERA SHIFT"),
        .description = COMPOUND_STRING("Terastallises upon entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("TERA SHELL"),
        .description = COMPOUND_STRING("Resists all at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("TERAFORM ZERO"),
    #else
        .name = _("TeraformZero"),
    #endif
        .description = COMPOUND_STRING("Zeroes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
    #if B_EXPANDED_ABILITY_NAMES == TRUE
        .name = _("POISON PUPPETEER"),
    #else
        .name = _("PoisnPuppter"),
    #endif
        .description = COMPOUND_STRING("Confuses poisoned foes."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};
